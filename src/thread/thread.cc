#include "thread.h"
#include "logger.h"
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>


Thread::Thread(){
    if(pthread_create(&m_tid,NULL,taskFunc,this)){
        LOG_FATAL << "create thread failed!" ;
    }
    if(-1 == socketpair(AF_UNIX,SOCK_STREAM,0,m_channel)){
    LOG_ERROR << strerror(errno);
    }
}

Thread::~Thread(){
    pthread_join(m_tid,NULL);
}

int Thread::GetSocketPairFirst()const{
    return m_channel[0];
}

int Thread::GetSocketPairSecond()const{
    return m_channel[1];
}

int Thread::GetTid() const{
    return m_tid;
}

void* Thread::taskFunc(void* arg){
    Thread* thread = static_cast<Thread*>(arg);
    thread->m_reactor = new Reactor();
    thread->m_reactor->AddEventAndHander(thread->GetSocketPairSecond(),EV_READ | EV_PERSIST,Thread::SocketPairEventCallBack,arg);
    LOG_INFO << thread ->GetTid();
    
    thread->m_reactor->Loop();
}  

void Thread::SocketPairEventCallBack(int fd,short events,void* arg){
    Thread* thread = static_cast<Thread*>(arg); 
    int cfd = 0;
    if(read(fd,&cfd,4)<=0){
        LOG_ERROR << strerror(errno);
    }
    thread->m_reactor->AddEventAndHander(cfd,EV_READ | EV_PERSIST,Thread::ClientIOEventCallBack,arg);
}

void Thread::ClientIOEventCallBack(int cfd,short events,void* arg){
    char buf[LARGE_BUF_LEN] = {0};
    if(read(cfd,buf,LARGE_BUF_LEN)<=0){
        LOG_ERROR << strerror(errno);
    }
    LOG_INFO << buf;
}


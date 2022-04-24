#ifndef __THREAD_H__
#define __THREAD_H__

#include <pthread.h>
#include "reactor.h"
#include "logger.h"

class Reactor;
class Thread{
private:
    pthread_t m_tid;
    int m_channel[2];
    Reactor* m_reactor;
public: 
    static void* taskFunc(void* arg);
    static void SocketPairEventCallBack(int fd,short events,void* arg);
    static void ClientIOEventCallBack(int fd,short events,void* arg);
    Thread();
    ~Thread();  

    int GetSocketPairFirst()const;
    int GetSocketPairSecond()const;
    int GetTid()const;

};

 
#endif
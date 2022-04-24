#include "mainServer.h"
#include "ipAddressPort.h"
#include "logger.h"
#include "unistd.h"
#include "thread.h"



MainServer::MainServer(){
    m_server = new TcpServer(IpAddressPort{"127.0.0.1",8000});
    m_pool = new ThreadPool(3);
    m_reactor = new Reactor();
    m_reactor->AddEventAndHander(m_server->GetLfd(),EV_READ | EV_PERSIST,ListenEventCallBack,this);
    m_reactor->Loop();
}

MainServer::~MainServer(){

}

void MainServer::ListenEventCallBack(int fd,short events,void* arg){
    MainServer* mainServer = static_cast<MainServer*>(arg);
    if(EV_READ | events){
        int cfd = mainServer->m_server->Accept();
        if(cfd == -1){
            LOG_ERROR << "Accept() failed!";
        }
        write(mainServer->m_pool->GetSubThreadSocketPairFirst(),(char*)&cfd,4);
    }
}

int main(){
    MainServer ser;
    return 0;
}
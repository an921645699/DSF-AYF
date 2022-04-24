#ifndef __MAIN_SERVER_H__
#define __MAIN_SERVER_H__
#include "tcpServer.h"
#include "threadPool.h"
#include "reactor.h"

class MainServer{
private:
    TcpServer* m_server;
    ThreadPool* m_pool;
    Reactor* m_reactor;
public:
    MainServer();
    ~MainServer();

    static void ListenEventCallBack(int fd,short events,void* arg);

};

#endif
#include "tcpServer.h"
#include "public.h"
#include "msg.h"

#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>


TcpServer::TcpServer(const IpAddressPort& IpAddressPort){
    m_lfd = socket(AF_INET,SOCK_STREAM,0);
    if(-1 == m_lfd){
        LOG_FATAL << strerror(errno);
    }

    struct sockaddr ser;
    ser.sin_family = AF_INET;
    ser.sin_port = htons(IpAddressPort.GetPort());
    ser.sin_addr.s_addr = inet_addr(IpAddressPort.GetIpAddress().c_str());

    if(-1 == bind(m_lfd,(struct sockaddr*)&ser,sizeof(ser))){
         LOG_FATAL << strerror(errno);
    }

    if(-1 == listen(ser,5)){
          LOG_FATAL << strerror(errno);
    }
}

    TcpServer::~TcpServer(){
        if(-1 == close(m_lfd)){
            LOG_FATAL << strerror(errno);
        }
    }

    int TcpServer::Accept(){
        struct sockaddr_in cli;
        socklen_t len = sizeof(cli);
        int cfd = accept(m_lfd,*struct sockaddr*)&cli,&len);
        if(-1 == cfd){
            LOG_ERROR << strerror(errno);
        return -1;
        }else{
            char clientIpBuf[SMALL_BUF_LEN] = {0};
            if(inet_ntop(AF_INET,&cli.sin_addr,clientIpBuf,SMALL_BUF_LEN)){
                LOG_ERROR << strerror(errno);
            }else{
                std::string clientIp(clientIpBuf);
                unsigned short clientPort = ntohs(cli.sin_addr);
                IpAddressPort ipAddressPort(clientIp,clientPort);
                LOG_INFO << 
            }
        }
        return cfd;
    }
    int TcpServer::SendMsg(const std::string& msg){
        int numberOfSendByte = send(m_lfd,msg.c_str(),strlen(msg.c_str()),0)
        if(-1 == numberOfSendtype){
            LOG_ERROR << strerror(errno);
        }
    }
    Msg TcpServer::RecvMsg(){
        
    }
    int TcpServer::GetLfd() const{
        return m_lfd;
    }
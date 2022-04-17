#include "tcpClient.h"
#include "IpAddressPord.h"
#include "logger.h"
#include "public.h"
#include "msg.h"
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>


TcpClinet::TcpClient(const IpAddressPort& IpAddressPort){
    m_sfd = socket(AF_INET,SOCK_STREAM,0);
    if(m_sfd == -1){
        LOG_FATAL << strerror(errno);
    }

    struct sockaddr_in ser;
    memset(&saddr,0,sizeof(saddr));
    ser.sin_famile = AF_INET;
    ser.sin_port = honts(IpAddressPord.GetPort());
    ser.sin_addr.s_addr = inet_addr(IpAddressPord.GetIpAddress().c_str());

    if(-1 == connect(&m_sfd,(struct aockaddr*)&ser,sizeof(ser)){
        LOG_FATAL << strerror(errno);
    }

}

TcpClinet::~TcpClient(){
    if( -1 == close(m_sfd)){
        LOG_FATAL << strerror(errno);
    }
}
int TcpClinet::SendMsg(const std::string& msg){

    int numberOfSendByte = send(m_sfd,msg.c_str(),strlen(msg.c_str()),0)
    if(-1 == numberOfSendtype){
        LOG_ERROR << strerror(errno);
    }
    return numberOfSendtype;
}
Msg TcpClinet::RecvMsg(){
    char buff[LARGE_BUF_LEN] = {0};
    int numberOfRecvByte = recv(m_sfd,buf,LARGE_BUF_LEN,0);
    if(-1 == numberOfRecvByte){
        LOG_ERROR << strerror(errno);
    }

    return ;
}

int TcpClient::GetSfd() const{
    return m_sfd;
}
#include "tcpClient.h"
#include "ipAddressPort.h"
#include "logger.h"
#include "public.h" 
#include "msg.h"
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <iostream>



TcpClient::TcpClient(const IpAddressPort& ipAddressPort){
    m_sfd = socket(AF_INET,SOCK_STREAM,0);
    if(m_sfd == -1){
        LOG_FATAL << strerror(errno);
    }

    struct sockaddr_in ser;
    ser.sin_family = AF_INET;
    ser.sin_port = htons(ipAddressPort.GetPort());
    ser.sin_addr.s_addr = inet_addr(ipAddressPort.GetIpAddress().c_str());

    if(-1 == connect(m_sfd,(struct sockaddr*)&ser,sizeof(ser))){
        LOG_FATAL << strerror(errno);
    }
    LOG_INFO << "connect success!";
}

TcpClient::~TcpClient(){
    if( -1 == close(m_sfd)){
        LOG_FATAL << strerror(errno);
    }
}
int TcpClient::SendMsg(const std::string& msg){

    int numberOfSendByte = send(m_sfd,msg.c_str(),strlen(msg.c_str()),0);
    if(-1 == numberOfSendByte){
        LOG_ERROR << strerror(errno);
    }
    return numberOfSendByte;
}
Msg TcpClient::RecvMsg(){
    char buf[LARGE_BUF_LEN] = {0};
    int numberOfRecvByte = recv(m_sfd,buf,LARGE_BUF_LEN,0);
    if(-1 == numberOfRecvByte){
        LOG_ERROR << strerror(errno);
    }
    return Msg(buf,numberOfRecvByte);
}

int TcpClient::GetSfd() const{
    return m_sfd;
}

int main(){
    IpAddressPort ser("127.0.0.1",8000);
    TcpClient client(ser);
    client.SendMsg("hello,world!");
    return 0;
}
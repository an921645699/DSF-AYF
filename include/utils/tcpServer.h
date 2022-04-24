#ifndef __TCP_SERVER_H__
#define __TCP_SERVER_H__


#include <string>
class IpAddressPort;
class Msg;

class TcpServer {
private:
    int m_lfd;
public:
    TcpServer(const IpAddressPort& ipAddressPort);
    ~TcpServer();
    int Accept();
    int SendMsg(int cfd,const std::string& msg);
    Msg RecvMsg(int cfd);
    int GetLfd() const;
};


#endif
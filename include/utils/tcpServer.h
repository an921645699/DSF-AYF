#ifndef __TCP_SERVER__H__
#define __TCP_SERVER__H__


#include <string>
class IpAddressPort;
class Msg;

class TcpServer {
private:
    int m_lfd;
public:
    TcpServer(const IpAddressPort&);
    ~TcpServer();
    int Accept();
    int SendMsg(const std::string& msg);
    Msg RecvMsg();
    int GetLfd() const;
};


#endif
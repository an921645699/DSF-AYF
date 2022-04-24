#ifndef __TCP_CLIENT_H__
#define __TCP_CLIENT_H__

#include <string>

class IpAddressPort;
class Msg;


class TcpClient {
private:
    int m_sfd;
public:
    TcpClient(const IpAddressPort& ipAddressPort);
    ~TcpClient();
    int SendMsg(const std::string& msg);
    Msg RecvMsg();

    int GetSfd() const;
};


#endif
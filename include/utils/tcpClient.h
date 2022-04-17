#ifndef __TCP__CLIENT__H_
#define __TCP__CLIENT__H_

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
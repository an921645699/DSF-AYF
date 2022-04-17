#ifndef __TCP__CLIENT__H_
#define __TCP__CLIENT__H_
#include "msg.h"


class TcpClinet {
private:
    int m_sfd;
public:
    TcpClinet();
    ~TcpClinet();
    void SendMsg(const std::string& msg);
    Msg RecvMsg(std::string& msg);

    int GetSfd() const;
};


#endif
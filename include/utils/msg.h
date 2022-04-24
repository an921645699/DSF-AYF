#ifndef __MSG_H__
#define __MSG_H__
#include <string>
#include <sstream>

struct Msg{
    std::string m_msg;
    int m_numberOfRecvBytes;

    Msg(std::string msg,int numberOfRecvBytes) : m_msg(msg),m_numberOfRecvBytes(numberOfRecvBytes){}
    std::string To_String() const{
        std::stringstream ss;
        ss << "[recmsg:" << m_msg << "]" << "[numberOfRecvBytes:" << m_numberOfRecvBytes << "]";
        return ss.str();
    }
};

#endif
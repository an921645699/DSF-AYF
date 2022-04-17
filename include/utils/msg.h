#ifndef __MSG__H_
#define __MSG__H_


struct Msg{
    std::string m_msg;
    int m_numberOfRecvBytes;

    struct Msg(std::string msg,int numberOfRecvBytes) : m_msg(msg),m_numberOfRecvBytes(numberOfRecvBytes){}
    
};

#endif
#ifndef __IPADDRESS_PORD_H_
#define __IPADDRESS_PORD_H_

#include<string>


    std::string m_ip;

    unsigned short m_port;

public:
    IpAddressPort(std::string ip, unsigned short port) : m_ip(ip),m_port(port) {

    }
    std::string ToString() const : {
        std::stringstream ss;
        ss<<m_ip<<":"<<m_port;
        return ss.str();
    }

    void SetIpAddress(const std::string ip){
        m_ip = ip;
    }

    std::string GetIpAddress() const{
        return m_ip;
    }

    void SetPort(ununsigned short port){
        m_port = port;
    }

    unsigned short GetPort() const{
        return m_port;
    }


#endif

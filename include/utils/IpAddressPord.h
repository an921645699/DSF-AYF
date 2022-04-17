#ifndef __IPADDRESS_PORD_H_
#define __IPADDRESS_PORD_H_

#include<string>

class IpAddressPort {
private:
    std::string m_ip;
    unsigned short m_port;

public:
    IpAddressPort(std::string, unsigned short);
    std::string ToString() const;
    void SetIpAddress(std::string ip);
    std::string GetIpAddress() const;
    void SetPort();
    unsigned short GetPort() const;
};

#endif

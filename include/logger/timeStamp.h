#define __TIME__STAMP_H__
#define __TIME__STAMP_H__

#include<cctype>
#include<string>

class TimeStamp{
private:
    int64_t m_secondSinceEpoch;

public:
    TimeStamp();
    TimeStamp(uint64_t);
    std::string ToString();
    static TimeStamp Now();
};


#include <iostream>
#include <ctime>
#include "timeStamp.h"
#include "public.h"

using namespace std;


TimeStamp::TimeStamp() : m_secondSinceEpoch(0) {}
TimeStamp::TimeStamp(uint64_t secondSinceEpoch) 
    : m_secondSinceEpoch(secondSinceEpoch) {}

std::string TimeStamp::ToString()  {
    struct tm t;
    localtime_r(&m_secondSinceEpoch, &t);

    char buf[SMALL_BUF_LEN] = {0};
    snprintf(buf, SMALL_BUF_LEN ,"[%04d/%02d/%02d %02d:%02d:%02d]",
    t.tm_year + 1900,t.tm_mon + 1,t.tm_mday,t.tm_hour,t.tm_min,t.tm_sec);
    return buf;
}
TimeStamp TimeStamp::Now() {
    return TimeStamp(time(NULL));
}

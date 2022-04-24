#ifndef __LOGGER_H__
#define __LOGGER_H__
#include <iostream>
#include <fstream>
#include "message.h"
#include "public.h"
//单例模式

class Logger
{
private:
    Logger();

    bool m_LogToTerminal;
    bool m_LogToLogFile;
    std::fstream m_logFile;
    LOG_LEVEL m_level;
public:
    static Logger* GetInstance(){
        static Logger Logger;
        return &Logger;
    }

    void SetLogToTerminal(bool logToTerminal);
    bool GetLogToTerminal() const;

    void SetLogToLogFile(bool logToLogFile);
    bool GetLogToLogFile() const;

    void SetLogToLevel(LOG_LEVEL level);
    LOG_LEVEL GetLogLevel() const;

    void SetLogFile(const std::string& logFileName = "dsf.log");

    void operator+=(const Message& msg){
        if(m_LogToTerminal){
            std::cout << msg.ToString(true) << std::endl;
        }else if(m_LogToLogFile){
            m_logFile << msg.ToString(false) << std::endl;
        }
        if(msg.ToString().find("FATAL") != std::string::npos){
            std::cout<< "fatal happened!"<< std::endl;
            exit(-1);
        }
    }
};
 
#define LOG(level) \
    if(level >= Logger::GetInstance() ->GetLogLevel()) \
        *Logger::GetInstance() += Message(level, __FILE__ , __FUNCTION__ , __LINE__ )

#define LOG_INFO LOG(INFO)
#define LOG_ERROR LOG(ERROR)
#define LOG_DEBUG LOG(DEBUG)
#define LOG_FATAL LOG(FATAL)

#endif
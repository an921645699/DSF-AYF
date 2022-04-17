#include "logger.h"
#include "public.h"
#include "message.h"
#include <fstream>
#include <iostream>


    Logger::Logger(){
        if(!getenv("LOG_LEVEL")){
            m_level = INFO;
        }else{
            m_level = logLevelType[getenv("LOG_LEVEL")];
        }
        m_LogToTerminal = true;
        m_LogToLogFile = true;
    }

    void Logger::SetLogToTerminal(bool logToTerminal){
        m_LogToTerminal = logToTerminal;
    }
    bool Logger::GetLogToTerminal() const{
        return m_LogToTerminal;
    }

    void Logger::SetLogToLogFile(bool logToLogFile){
        m_LogToTerminal = logToLogFile;
    }
    bool Logger::GetLogToLogFile() const{
        return m_LogToLogFile;
    }
    
    void Logger::SetLogToLevel(LOG_LEVEL level){
        m_level =level;
    }
    LOG_LEVEL Logger::GetLogLevel() const{
        return m_level;
    }

    void Logger::SetLogFile(const std::string& logFileName){
        if(m_logFile.is_open()){
            m_logFile.close();
        }
        m_logFile.open(logFileName);
        m_LogToLogFile = true; 
    }

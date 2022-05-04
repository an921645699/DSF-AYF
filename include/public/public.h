#ifndef __PUBLIC_H__
#define __PUBLIC_H__

#include<map>
#include<unordered_map>

const int SMALL_BUF_LEN =128;
const int MEDIAN_BUF_LEN = 512;
const int LARGE_BUF_LEN = 1024;

enum COLOR_NUMBER{
    DEFAULT_COLOR = 0,
    INFO_COLOR  = 36,
    ERROR_COLOR = 35,
    DEBUG_COLOR = 32,
    FATAL_COLOR = 31,
    LINE_COLOR ,
    FUNCTION_COLOR ,
    FILE_COLOR ,

};

enum LOG_LEVEL{
    INFO = 0,
    ERROR,
    DEBUG,
    FATAL
};

enum LOG_FEILD{
    LINE_NUMBER = 0,
    FUNCTION_NAME,
    FILE_NAME
};

static std::unordered_map<LOG_LEVEL,COLOR_NUMBER> LogLevelColor ={
    {INFO,INFO_COLOR}  ,
    {ERROR,ERROR_COLOR},
    {DEBUG,DEBUG_COLOR},
    {FATAL,FATAL_COLOR}
};

static std::unordered_map<LOG_FEILD,COLOR_NUMBER> LogFeileColor ={
    {LINE_NUMBER,LINE_COLOR}        ,
    {FUNCTION_NAME,FUNCTION_COLOR}  ,
    {FILE_NAME,FILE_COLOR}
};

static std::unordered_map<LOG_LEVEL, std::string> logLevelTypeString ={
    {INFO,"[INFO]"}   ,
    {ERROR,"[ERROR]"} ,
    {DEBUG,"[DEBUG]"} ,
    {FATAL,"[FATAL]"} 
};

static std::unordered_map<std::string,LOG_LEVEL> logLevelType ={
    {"INFO",INFO}   ,
    {"ERROR",ERROR} ,
    {"DEBUG",DEBUG} ,
    {"FATAL",FATAL}
};

enum BIZTYPE{
    LOGIN = 0,
    REGISTER,
    
};

static const std::string REDIS_IP = "127.0.0.1";
static const unsigned short REDIS_PORT = 6379;

static const std::string MYSQL_IP = "127.0.0.1";
static const unsigned short MYSQL_PORT = 3306;

static const std::string USER = "root";
static const std::string PASSWORD = "123456";
static const std::string DB = "mysql";


#endif
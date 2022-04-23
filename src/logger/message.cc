#include "message.h"
#include "timeStamp.h"
#include "public.h"
#include <iostream>
#include <sstream>

using namespace std;

std::string Message::formatFieldWithColor(COLOR_NUMBER colorNumber, bool dark, 
    const std::string& delimiter, const std::string& fieldName, bool colored) {
    std::stringstream ss; // ss << xx
    if (colored) {
        ss << "\033[" << dark << ";" << colorNumber << "m";
    }
    ss << fieldName;
    if (colored) { 
        ss << "\033[0m";
    }
    ss << delimiter;
    return ss.str();
}

Message::Message(LOG_LEVEL level,  const std::string& absoluteFileName, 
    const std::string& functionName, int lineNumber, bool colored) {
    std::string fileName = absoluteFileName;
    int pos = 0;
    for(int i = fileName.length() -1;i >= 0; --i){
        if( fileName[i] == '/'){
            pos = i;
            break;
        }
    }
    fileName = fileName.substr(pos+1,fileName.length() - pos);
    
    m_coloredHeader = FormatHeader(level,fileName,functionName,lineNumber,true);
    m_commonHeader  = FormatHeader(level,fileName,functionName,lineNumber,false);
}

 std::string Message::FormatHeader(LOG_LEVEL level, const std::string& fileName, 
        const std::string& functionName, int lineNumber, bool colored = true) {
    // 时间戳
    std::stringstream ss;
    ss << formatFieldWithColor(DEFAULT_COLOR, 0, "", TimeStamp::Now().ToString(), colored);

    // 日志级别  INFO -> "[INFO]"
    COLOR_NUMBER logColorNumber = LogLevelColor[level];
    std::string logLevelType = logLevelTypeString[level];
    ss << formatFieldWithColor(logColorNumber, 1, "", logLevelType , colored);
    
    // 文件名称
    COLOR_NUMBER fileColor = LogFeileColor[FILE_NAME];
    ss << formatFieldWithColor(fileColor, 1, "", "[" + fileName + "]", colored); 
    // 函数名称
    COLOR_NUMBER functionColor = LogFeileColor[FUNCTION_NAME];
    ss << formatFieldWithColor(functionColor, 1, "", "[" + functionName + "]", colored);
    // 行号
    COLOR_NUMBER lineColor = LogFeileColor[LINE_NUMBER];
    ss << formatFieldWithColor(lineColor, 1, "", "[" + std::to_string(lineNumber) + "]:", colored);

    return ss.str(); 
}

std::string Message::ToString(bool colored) const{
    return colored ? m_coloredHeader + m_msg : m_commonHeader + m_msg;
}



#ifndef __MYSQL_H__
#define __MYSQL_H__
#include <mysql/mysql.h>
#include <string>

//设计成一个线程安全的mysql单例类
class MySQL{
private:
    MYSQL* m_mysqlClient;
    MySQL(){
        m_mysqlClient = mysql_init(nullptr);
    }
public:
    static MySQL* GetInstance(){
        static MySQL res; 
        return &res;
    }

    void ConnectMysqlServer(const std::string& ip,unsigned short port,const std::string& user,
        const std::string& password,const std::string& db);
    
    bool query(const std::string& sql);
    bool Insert(std::string&& sql);

    ~MySQL();
};

#endif
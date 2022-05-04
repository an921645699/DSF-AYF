#include "mysql.h"
#include "logger.h"
#include "public.h"


void MySQL::ConnectMysqlServer(const std::string& ip,unsigned short port,const std::string& user,
        const std::string& password,const std::string& db){
    if(!mysql_real_connect(m_mysqlClient,ip.c_str(),user.c_str(),
            password.c_str(),db.c_str(),port,NULL,0)){
        LOG_ERROR << "mysql_real_connect() failed!";
    }
}
    
bool MySQL::query(const std::string& sql){
    LOG_INFO << "sql:" << sql;
    if(mysql_query(m_mysqlClient,sql.c_str())){
        LOG_ERROR << "mysql_query() failed!";
        return false;
    }
    return true;
}

bool MySQLDB::Insert(std::string&& sql) {
    // return value
    LOG_INFO << "sql:" << sql;
    // 执行成功返回0
    if (mysql_query(m_mysqlClient, sql.c_str())) {
        LOG_ERROR <<  mysql_error(m_mysqlClient);
        return false;
    }
    return true;
}

MySQL::~MySQL(){
    if(m_mysqlClient != nullptr){
        mysql_close(m_mysqlClient);
    }
}

/*
int main(){
    MySQL* m = MySQL::GetInstance();
    m->ConnectMysqlServer(MYSQL_IP,MYSQL_PORT,USER,PASSWORD,DB);

    std::string name = "root";
    std::string password = "123456";
    std::stringstream ss;
    //ss << "select * from user where name = \"" << name << "\" and password = \""<< password <<"\";";
    ss << "show tables;" ;

    std::cout<< m->query(ss.str()) <<std::endl;
}
*/
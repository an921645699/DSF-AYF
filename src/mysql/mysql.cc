#include "mysql.h"
#include "logger.h"
#include "public.h"

static const std::string IP = "127.0.0.1";
static const unsigned short PORT = 3306;
static const std::string USER = "root";
static const std::string PASSWORD = "123456";
static const std::string DB = "mysql";


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

MySQL::~MySQL(){
    if(m_mysqlClient != nullptr){
        mysql_close(m_mysqlClient);
    }
}

int main(){
    MySQL* m = MySQL::GetInstance();
    m->ConnectMysqlServer(IP,PORT,USER,PASSWORD,DB);

    std::string name = "ayf";
    std::string password = "123456";
    std::stringstream ss;
    ss << "select * from user where name = \"" << name << "\" and password = \""<< password <<"\";";


    std::cout<< m->query(ss.str()) <<std::endl;
}
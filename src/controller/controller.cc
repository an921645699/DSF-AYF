#include "controller.h"
#include "public.h"
#include "json.h"


Controller::Controller(){
    m_bizTypeMap = new std::unordered_map<BIZTYPE,View*>();
    m_bizTypeMap->insert({LOGIN,new LoginView()});
    m_bizTypeMap->insert({REGISTER,new RegisterView()});
}

Controller::~Controller(){

}

void Controller::process(int fd,std::string& date){
    using namespace nlohmann;
    nlohmann::json j = nlohmann::json::parse(date);
    for(auto x = m_bizTypeMap->begin();x != m_bizTypeMap->end();++x){
        x->second->process(fd,date);
    }   
}

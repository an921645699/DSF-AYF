#include "controller.h"


Controller::Controller(){
    m_bizTypeMap = new unordered_map
}
Controller::~Controller();
void Controller::process(int fd,std::string& date){
    m_bizTypeMap[base("bizType")]->process(fd,date);
}
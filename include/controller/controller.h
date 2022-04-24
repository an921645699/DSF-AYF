#ifndef __CONTROLLER_H__
#define __CONTROLLER_H__

#include <unordered_map>
#include <string>
#include "view.h"
#include "public.h"


class Controller{
private:
    std::unordered_map<BIZTYPE,View*>* m_bizTypeMap;
public:
    Controller();
    ~Controller();
    void process(int fd,std::string& date);
};

#endif
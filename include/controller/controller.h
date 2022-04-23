#ifndef __CONTROLLER__H_
#define __CONTROLLER__H_

#include <unordered_map>
#include "view.h"


class Controller{
private:
    std::unordered_map<BIZTYPE,View*>* bizTypeMap = {
        {LOG,new Log}
    }
public:
    Controller();
    ~Controller();
    void Controllerprocess(int fd,std::string& date);
};

#endif
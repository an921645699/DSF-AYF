#ifndef __VIEW__H_
#define __VIEW__H_

class View{
public:
    virtual void process(int fd,std::string& date) = 0;
};

class LoginView : public View{
    void process(int fd,std::string& date);
}

class RegisterView : public View{
    void process(int fd,std::string& date);
}

#endif
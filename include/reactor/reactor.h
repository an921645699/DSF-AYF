#ifndef __REACTOR_H__
#define __REACTOR_H__
#include <event.h>

class Reactor{
private:
    struct event_base* m_reactor;
public:
    Reactor();
    ~Reactor();
    void AddEventAndHander(int ,short,event_callback_fn,void*);
    void Loop();
};

#endif

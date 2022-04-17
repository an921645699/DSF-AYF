#ifndef __THREAD__H_
#define __THREAD__H_

#include <pthread.h>
#include "logger.h"

class Thread {
private:
    pthread_t m_tid;
public: 
    void* taskFunc(void* arg){
        Thread* thread = static_cast<Thread*>(arg);
        LOG_INFO << thread ->m_tid;
    }
    Thread(){
        if(!pthread(&m_tid,NULL,taskFunc,this)){
            LOG_FATAL << "create thread failed!"
        }
    }
    ~thread();

};


#endif
#include "threadPool.h"
#include "thread.h"

ThreadPool::ThreadPool(int numberOfThread) : m_numberOfThread(numberOfThread){
    for(int i = 0;i< m_numberOfThread;i++){
        m_pool.push_back(new Thread());
    }
}
ThreadPool::~ThreadPool(){
    for(int i = m_numberOfThread-1;i>=0;i++){
        delete m_pool[i];
        m_pool.pop_back();
    }
}
int ThreadPool::GetNumberOfTread()const{
    return m_numberOfThread;
}
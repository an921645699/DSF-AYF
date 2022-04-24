#ifndef __THREAD_POOL_H__
#define __THREAD_POOL_H__
#include <vector>

class Thread;
class ThreadPool{
private:
    std::vector<Thread*> m_pool;
    int m_numberOfThread;
public:
    ThreadPool(int numberOfThread);
    ~ThreadPool();
    int GetNumberOfTread() const;
    int GetSubThreadSocketPairFirst() const;
};

#endif
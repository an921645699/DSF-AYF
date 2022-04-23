#ifndef __THREAD_POOL__H_
#define __THREAD_POOL__H_
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
};

#endif
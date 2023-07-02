#ifndef LOOPTHREAD_H
#define LOOPTHREAD_H
#include <qthread.h>

class LoopThread: public QThread
{
    Q_OBJECT
public:
    LoopThread();
protected:
    virtual void run() override;
};

#endif // LOOPTHREAD_H

#ifndef QUEUE_H
#define QUEUE_H
#include "Collection.h"

template<class T> class Queue : public Collection<T>{

public:
    virtual void add(T e)=0;
    virtual T element()=0;
    virtual void offer(T e)=0;
    virtual T poll()=0;
};

#endif /* QUEUE_H */


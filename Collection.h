#ifndef COLLECTION_H
#define COLLECTION_H
#include "Iterator.h"

using namespace iterative;

template <class T>
class Collection {
public:
    virtual It<T>iterator()=0;
    virtual void add(T e)=0;
    virtual void addAll(Collection& c)=0;
    virtual void clear()=0;
    virtual bool contains(T e)=0;
    virtual bool containsAll(Collection& c)=0;
    virtual  bool isEmpty()=0;
    virtual vector<T> getVect()=0;
    virtual void remove(T e)=0;
    virtual void removeAll(Collection& c)=0;
    virtual void retainAll(Collection& c)=0;
    virtual int size()=0;

};

#endif /* COLLECTION_H */


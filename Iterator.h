#ifndef ITERATOR_H
#define ITERATOR_H
#include <vector>
#include <iostream>
using namespace std;

namespace iterative {

    template<class T>
    class It {

    public:
        T now(){
            return *Ptr;
        }
        void set(vector<T> c){
            Ptr=&c[pos];
            pos++;
            size=c.size();
        }
        T next(){
            if(pos<size){
                pos++;
                Ptr++;          
                return *Ptr;
            }
            else{
                cout<<"Out of index";
            }
        }
        bool hasNext(){
            if (++Ptr != nullptr)
            return true;
        else
            return false;
        }
        It &remove(){
            --Ptr;
            --pos;
            return *Ptr;
        }

    private:
        T* Ptr;
        int pos=0;
        int size;

    };

}

#endif /* ITERATOR_H */


#ifndef ARRAYLIST_H
#define ARRAYLIST_H
#include <vector>
#include "List.h"
#include "Iterator.h"
#include <iostream>

using namespace iterative;
using namespace std;

template <class T>
class ArrayList : public List<T>{

public:
    ArrayList<T>(){
        
    }

    void print(){
        
        for(int i=0;i<data.size();i++){
            cout<<data[i]<<endl;
        }
    }
    
    
    void add(T e) override{
        data.push_back(e);
        iteratorx.set(data);
    }
    void addAll(Collection<T>& c) override {
        for(int i=0; i<c.size(); i++){
            data.push_back(c.getVect()[i]);
            
        }
    }
    void clear() override {
        data.clear();
    }
    bool contains(T e) override {
        for(int i=0;i<data.size();i++){
            if(data[i]==e){
                return true;
            }
        }
        return false;
    }
    bool containsAll(Collection<T>& c) override {
        int total=0;
        for(int i=0;i<data.size();i++){
            for(int j=0;j<c.size();j++){
                if(data[i]==c.getVect()[i]){
                    total++;
                }
            }
            
        }
        if(total==c.size()){
            return true;
        }
        return false;
    }
    bool isEmpty() override {
        if(data.empty()){
            return true;
        }
        return false;
    }
    void remove(T e) override {
        for(int i=0;i<data.size();i++){
            if(data[i]==e){
                data.erase(std::remove(data.begin(), data.end(), e), data.end()); 
            }
        }
    }
    void removeAll(Collection<T>& c) override {
        for(int i=0;i<data.size();i++){
            for(int j=0;j<c.size();j++){
                if(data[i]==c.getVect()[i]){
                    data.erase(std::remove(data.begin(), data.end(), c.getVect()[i]), data.end()); 
                }

            }
            
        }
    }
    void retainAll(Collection<T>& c) override {
        vector<T> t;
        for(int i=0;i<data.size();i++){
            for(int j=0;j<c.size();j++){
                if(data[i]==c.getVect()[i]){
                    t.push_back(c.getVect()[i]);
                }
            }
            
        }
        data.clear();
        for(int i=0;i<t.size();i++){
            data.push_back(t[i]);
        }
    }
    int size() override {
        return data.size();
    }
    vector<T> getVect() override{
        return data;
    }
    It<T> iterator() override {
        return iteratorx;
    }

private:
    It<T> iteratorx;
    vector<T> data;
    int sizee;
};
#endif /* ARRAYLIST_H */


#include "List.h"
#include "Queue.h"
#include "Set.h"
#include "HashSet.h"
#include "Collection.h"
#include "ArrayList.h"

using namespace std;

int main(int argc, char** argv) {

    ArrayList<int> s1,s2;
    HashSet<double> s3,s4;
    
    //Array list fonk denemeleri
    
    s1.add(5);
    s1.add(6);
    s1.add(7);
    
    s1.print();
    cout<<s1.contains(5)<<endl;
    
    s1.print();
    
    s2.add(10);
    s2.addAll(s1);
    
    s2.print();

    cout<<s2.iterator().now()<<endl;
    cout<<s2.iterator().next()<<endl;
    
    cout<<s2.containsAll(s1)<<endl;
    
    cout<<s1.isEmpty()<<endl;
    cout<<s1.size()<<endl;
    s1.clear();
    cout<<s1.isEmpty()<<endl;
    
    //s3 set eleman ekleme
    
    s3.add(2.5);
    s3.add(3.5);
    s3.add(4.5);
    s3.print();
    
    //s4 setine ayni elemani ekleme denemesi
    
    s4.addAll(s3);
    s4.add(2.5);
    s4.print();
    
    cout<<s4.iterator().now()<<endl;
    
    cout<<s4.isEmpty()<<endl;
    
    s4.remove(2.5);    
    s4.print();
    
    s3.removeAll(s4);
    s3.print();
    
    s4.retainAll(s3);
    s4.print();
    
    return 0;
}


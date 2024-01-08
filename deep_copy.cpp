#include <iostream>
using namespace std;

class Data{
    int data1,data2;
    //default copy constructor will copy the address pointed to by the pointer and not the value pointed to by the pointer
    //which means if we changed the value of object 1 after we copied it to object 2, object 2 will also change because they are both pointing to the same memory location
    int *pointer;
public:
    Data(){
        pointer=new int;
    }
    Data(Data& d2){
        data1=d2.data1;
        data2=d2.data2;
        pointer=new int; //we need to allocate new memory
        *pointer=*(d2.pointer);
    }
    Data& operator=(Data& d2){
        data1=d2.data1;
        data2=d2.data2;
        pointer=new int; //we need to allocate new memory
        *pointer=*(d2.pointer);
    }
    void display(){
        cout<<"data 1: "<<data1<<" data 2: "<<data2<<"\n";
        cout<<"pointer: "<<*pointer<<"\n";
    }
    void set_values(int d1,int d2,int p){
        data1=d1;
        data2=d2;
        *pointer=p;
    }
    //destructor
    //If a base class pointer points to a derived class object
    //and we some time later use the delete operator to
    //delete the object, then the derived class destructor is
    //not called.
    //no memory leak if the destructor is virtual in the base class
    ~Data(){
        delete pointer;
        cout<<"goodbye\n";
    }
};

int main(){
    Data d1;
    d1.set_values(5,6,8);
    Data d2(d1);
    d1.display();
    d2.display();
    Data d3=d2;
    d3.display();
    return 0;
}
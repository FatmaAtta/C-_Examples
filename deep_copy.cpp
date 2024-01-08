#include <iostream>
using namespace std;

class Data{
    int data1,data2;
    //default copy constructor will copy the address pointed to by the pointer and not the value pointed to by the pointer
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
    void display(){
        cout<<"data 1: "<<data1<<" data 2: "<<data2<<"\n";
        cout<<"pointer: "<<*pointer<<"\n";
    }
    void set_values(int d1,int d2,int p){
        data1=d1;
        data2=d2;
        *pointer=p;
    }
};

int main(){
    Data d1;
    d1.set_values(5,6,8);
    Data d2(d1);
    d1.display();
    d2.display();
    return 0;
}
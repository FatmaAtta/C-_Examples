#include <iostream>
using namespace std;

class A{
public:
    virtual void pure_virtual()=0; //you have to define it in EVERY derived class
    //class A is now called an abstract class, which means that we cant create an instance of it
    void display(){
        cout<<"Hi im A\n";
    }
    virtual void display2(){
        cout<<"Hi im virtual display A\n";
    }
};
class B:public A{
public:
    void display(){
        cout<<"Hi im B\n";
    }
    void display2(){
        cout<<"Hi im virtual display B\n";
    }
    void pure_virtual(){
        cout<<"pure B\n";
    }
};

class C:public A{
public:
    void hi(){
        cout<<"Hi im c\n";
    }
    //i didnt implement the pure virtual function from the parent class
    //when i tried to create an object of type C, it gave me an error because i didnt implement that function and it labelled class C as abstract class
    //therefore i have to implement it:
    void pure_virtual(){
        cout<<"class C\n";
    }
};

int main(){
    A* a; //we can make a pointer of class A but we cannot make an object of class A
    //A trying; //gave me an error
    B b;
    //what happens when a derived class object is created?
    //space in the memory is allocated enough for all data members of the base class and the derived class
    //the base class constructor is called to initialize the data that the derived class inherited i.e the protected and public data members
    //derived class constructor is called to initialize the derived class data members
    //when object is destroyed or goes out of scope, derived class destructor is called
    //then base class destructor is called
    //allocated space is retrieved
    C c;
    a=&b;
    a->display(); //Hi im A
    //this is the concept of early binding (static/compile time), during compilation, compiler tells himself when to jump on which line of code when a function is called
    //in early binding, the compiler doesnt care about the address the pointer is holding
    //since 'a' was an object of class A then the function that we call will be the ones in class A
    //if we want the compiler to see the address in the pointer, we will use the virtual keyword only in the base class
    //late binding(dynamic/runtime)
    a->display2(); //we use base class pointers to point to derived class objects to use the derived object members and methods when needed
    c.pure_virtual();
    //you could also use the new keyword:
    A* new_keyword;
    new_keyword=new B;
    new_keyword->pure_virtual();

}
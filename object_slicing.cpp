#include <iostream>
#include <string>
using namespace std;

class Base{
    int value;
public:
    Base(int value):value(value){}
    int get_value(){
        return value;
    }
    virtual string get_name(){
        return "base\n";
    }
};
class Derived: public Base{
public:
    Derived(int value):Base(value){}
    string get_name(){
        return "derived\n";
    }
};
//object slicing means when we copy derived class into base class, it will only copy the base class portion and the new member variables in
//the derived class will get sliced off
int main(){
    Derived d(1);
    Base b(1);
    cout<<d.get_name(); //derived
    cout<<b.get_name(); //base
    b=d;
    cout<<b.get_name(); //base
    //d=b; //error

    return 0;
}
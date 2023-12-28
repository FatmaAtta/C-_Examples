#include <iostream>
#include <exception>
using namespace std;

class Custom_Exception:public exception{
public:
    virtual const char* what() const noexcept{ //noexcept means this function will not throw an exception
        return "Custom";
    }
};
//function that throws an exception
void throw_exception(){
    throw 20;
}

int main(){
    try{
//      throw 20;
//      you can create a function that throws an exception
//        throw "Hello";
        throw_exception();
        throw Custom_Exception();
    }
    catch(int num){
        cout<<"caught int\n";
    }
    catch(Custom_Exception& c){
        cout<<c.what();
    }
    catch(...){
        cout<<"Default catch\n";
    }
    return 0;
}
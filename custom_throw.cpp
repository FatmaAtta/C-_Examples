#include <iostream>
using namespace std;

int main(){
     try{
         throw runtime_error("RUNTIME ERROR!");
     }
     catch(runtime_error &r){ //more specific than exception -> it will get executed
         cout<<"runtime\n";
     }
     catch(bad_alloc &e){
        cout<<"bad alloc\n";
     }
     catch(out_of_range &e){
        cout<<"out of range\n";
     }
     catch(exception &e){
        cout<<"exception\n"<<e.what(); //e.what() is what printed the RUNTIME ERROR
     }
     return 0;
}
//                   exception  -> most general, super class
//                      |
//      ---------------------------------
//      |               |               |
//  logic_error      bad_alloc      runtime_error
//      |
//  out_of_range -> can be caught using a catch block of type logic_error or exception
//the catch blocks should be arranged from more specific to least specific
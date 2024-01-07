#include <iostream>
#include <string>
int main(){
    std::string name="Fatma";
    try{
        std::cout<<name.at(5)<<std::endl;
    }
    catch(...){
        std::cout<<"Didnt use throw";
    }
    return 0;
}

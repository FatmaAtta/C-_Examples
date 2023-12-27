#include <iostream>
#include <exception>


int main(){
    int age;
    std::cout<<"Enter your age:\n";
    std::cin>>age;
    try{
        if(age<18){
            throw age;
        }
        else{
            std::cout<<"Welcome!\n";
        }
    }
    catch(int age){ //parameter is the same type as the one that was thrown
        std::cout<<"You are not old enough!\n";
    }
    std::cout<<"Please enter the age of someone old enough!\n";
    std::cin>>age;
    return 0;
}
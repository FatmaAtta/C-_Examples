#include <iostream>
#include <exception>
#include <string>
//exception is the problems that occur during execution (runtime error)
//handling exceptions allows the program to continue running after warning the user of the error
//try block - write the code that you suspect will throw an exception
//if(condition that might cause the program to throw an error){
// throw (type);
// }
//catch(same type){
// however you want to handle the error
// }
//exception is a super class with many derived classes
//super class has a virtual function called what() that returns the exception's error message

//program that catches if we try to divide by zero
int main() {
    double num, den;
    std::cout<<"Enter the numerator and denominator:\n";
    std::cin>>num>>den;
    try{
        if(den){
            std::cout<<num/den<<std::endl;
        }
        else{
            throw "Can't divide by zero"; //this is not a string but an array of characters;
        }
    }
    catch(char const* s){ //not string s
        std::cout<<"cant divide by zero\n";
    }
    std::cout<<"Enter a new denominator:\n";
    std::cin>>den;
    std::cout<<num/den<<std::endl;
    return 0;
}

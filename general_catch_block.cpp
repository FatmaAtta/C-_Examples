#include <iostream>

int main(){
    int x,y;
    std::cout<<"enter x and y\n";
    std::cin>>x>>y;
    try{
        if (x < 10 && y < 10) {
            throw "values are smaller than 10";
        }
        if(x<10&&y>10){
            throw "x is smaller than 10 but y is greater than 10";
        }
        if(x==10){
            throw x;
        }
    }
    //if many if-statements evaluated to true where each has a throw statement, only the first exception is thrown
//    catch(int n){
//
//    }
    catch(...){
        std::cout<<"General catch\n";
    }
    //for each try block there must be at least one catch block
    //if you want to use multiple catch blocks then the general catch block must come last.
    return 0;
}
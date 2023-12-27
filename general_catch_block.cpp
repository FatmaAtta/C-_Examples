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
    //if many if-statements evaluated to true, only the first exception is thrown
    catch(...){
        std::cout<<"General catch\n";
    }

    return 0;
}
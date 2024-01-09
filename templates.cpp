#include <iostream>
using namespace std;
//we will use templates to make it more generic
//void swap(int& a,int&b){
//    int temp=a;
//    a=b;
//    b=temp;
//}
template<typename T> //you could use any name other than T, you could also write class instead of typename
void personal_swap(T&a,T&b){
    T temp=a;
    a=b;
    b=temp;
}
//to use multiple data types:
//the T from the previous template declaration isnt visible
template<typename T1,typename T2>
T1 speed(T1 distance,T2 time){
    return distance/time;
}

int main(){
//    int a{5},b{10};
//    cout<<a<<" "<<b<<endl;
////    swap(a,b);
//    swap(a,b);
//    cout<<a<<" "<<b;
    int a=5,b=10;
    personal_swap(a,b);
    cout<<a<<" "<<b<<endl;
    //you could also specify the type but you dont have to
    char c='c',d='d';
    personal_swap<char>(c,d);
    cout<<c<<" "<<d<<endl;

    int kmph=180;
    double seconds=50;
    //i dont understand?
    int speed(int kmph,double seconds);

    return 0;
}
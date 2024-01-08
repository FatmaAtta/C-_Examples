#include <iostream>
using namespace std;
//static data member is created once and is available throughout the entire program

//lets try to use static variables inside functions and not classes
void static_display(){
    static int counter=0; //this gets executed only once
    cout<<"Static function called "<<++counter<<" times\n";
}
int counter=0; //does same effect as the static function
void display(){
//    int counter=0; //gets executed everytime we call the function, we could make it global and it will have the same effect as the static function
    cout<<"Function called "<<++counter<<" times\n";
}
int main(){
    for (int i=0;i<10;i++){
        static_display();
        display();
    }
    return 0;
}
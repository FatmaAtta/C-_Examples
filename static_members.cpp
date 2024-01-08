#include <iostream>
using namespace std;

class Students{
    static int n_students; //you have to initialize it outside the class
    int n_non_static;
public:
   Students(){
       n_students++;
       n_non_static++;
   }
    friend void print_n(Students);
};
void print_n(Students s){
    cout<<"# of students= "<<s.n_students<<"\n";
    cout<<"# of non static= "<<s.n_non_static<<"\n";
}
int Students::n_students=0;
int main(){
    Students s1;
    Students s2;
    Students s3;
    print_n(s1); //prints 3 because there are three objects and 1 because the non static variable
    return 0;
}
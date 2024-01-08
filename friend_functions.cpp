#include <iostream>
#include <iomanip> //to use setprecision
using namespace std;

class EquilateralTriangle{
private:
    //if i want to access these outside the class, ill get an error. to fix that, you can use public getters or use friend functions
    float l;
    float perimeter;
    float area;
public:
    EquilateralTriangle(float l):l(l),perimeter(l*3),area(1.73/4 *l*l){}
    void set_l(float l){
        this->l=l;
    }
    void set_p(float p){
        this->perimeter=p;
    }
    void set_a(float a){
        this->area=a;
    }
    //friend functions aren't member functions, we just declare them in the class to let the class know it has a friend
    friend void print_results(EquilateralTriangle et); //you dont need to specify the name of the perimeter, just the type. but if you specified the name there wont be a problem

};
//friend functions must be global
void print_results(EquilateralTriangle et){
    //setprecision doesnt only work on the digits that come after the decimal point but on the digits before as well.
    //setprecision works on all the cout's unless you change the precision or reset it to default using setprecision(cout.precision())
    cout<<"Perimeter= "<<setprecision(3)<<(et.l)*3<<"\n"; //doesnt matter if you put setprecision before the "perimeter" or after the "perimeter"
    cout<<setprecision(5)<<"Area= "<<et.area<<" "<<5.234234<<" "<<6.434342<<"\n"; //write the setprecision only once and it will work on all
    cout<<"Area= "<<et.area<<" "<<5.2344343234<<setprecision(10)<<" "<<6.4343434342<<"\n"; //write the setprecision only once and it will work on all numbers that comes after it
}

int main(){
    EquilateralTriangle et(5.5);
    print_results(et);

    return 0;
}
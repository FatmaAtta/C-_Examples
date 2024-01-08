#include <iostream>
using namespace std;

class Boxes{
    int weight;
    static int total;
public:
    Boxes(int weight){
        total+=weight;
    }
    //static member functions can only access static member data
    //static member functions can be called without an object and can also be called by an object
    static int total_weight(){
    //return weight; //error because weight isnt static
        return total;
    }
};
int Boxes::total=0;
int main(){
    Boxes b1(50);
    Boxes b2(100);
    Boxes b3(500);
    cout<<Boxes::total_weight()<<endl;
    Boxes b4(150);
    Boxes b5(200);
    cout<<b1.total_weight();
    return 0;
}
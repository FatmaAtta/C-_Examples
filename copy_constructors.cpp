#include <iostream>
using namespace std;

class Transportation{
    string transportation_means;
public:
    Transportation(string trans):transportation_means(trans){}
    //manually creating a copy constructor
    //this is called shallow copying
    //when the object has pointers we will need deep copying
    Transportation(Transportation& t){
        transportation_means=t.transportation_means;
    }
    void print_trans(){
        cout<<transportation_means<<"\n";
    }
};

int main(){
    Transportation t1("train");
    Transportation t2(t1); //default copy constructor
    t2.print_trans();
    Transportation t3=t2; //default copy constructor can also be written like that
    return 0;
}
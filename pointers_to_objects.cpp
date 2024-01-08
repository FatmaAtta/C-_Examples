#include <iostream>
using namespace std;

class Shapes{
    string name;
public:
    Shapes(string name):name(name){}
    string get_name(){
        return name+" ";
    }

};

int main(){
    Shapes obj("Fatma");
    Shapes* pointer=&obj;
    cout<<pointer->get_name();
    Shapes* new_obj=new Shapes("Menahtail");
    cout<<new_obj->get_name();
    delete new_obj;
    return 0;
}
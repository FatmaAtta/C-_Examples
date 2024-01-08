#include <iostream>
using namespace std;

class Animal{
public:
    static int count;
    void speak(){
        cout<<"Animal\n";
    }
};
int Animal::count=0;
class Cat:public Animal{
public:
    void speak(){
        cout<<"Meow\n";
    }
};
class Dog:public Animal{
public:
    void speak(){
        cout<<"Bark\n";
    }
};

int main(){
    Animal* animal=new Cat;
    animal->speak(); //prints animal because speak isnt a virtual function
    Cat* cat=new Cat;
    cat->speak();
    //to create dynamic array of objects:
    Animal* animals=new Animal[10];
    for(int i=0;i<10;i++){
        animals[i].count++;
        animals[i].speak();
    }
    cout<<animals->count<<endl;
    delete[] animals;
    //creating dynamic array using malloc
    Cat* cats=(Cat*) malloc(sizeof(Cat)*3); //should put parentheses around Cat*
    cats[0].speak();
    cats[1].speak();
    cats[2].speak();
    free(cats);
    return 0;
}
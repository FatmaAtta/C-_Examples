#include <iostream>
using namespace std;

class Counter{
private:
    int count;
public:
    Counter(int counter):count(counter){}
    void increment(){
        count++;
    }
    void print(){
        cout<<count<<"\n";
    }
    Counter operator+(Counter count){
        return this->count+=count.count; //i forgot to write return lol
    }

    //we will have 2 parameters now
    friend Counter operator-(Counter c1, Counter c2);
    friend void operator<<(ostream& os,Counter& c); //works fine
//idk why the ofllowing code doesnt work
//    ostream& operator<<(ostream& os){
//        os<<this->count;
//    }
};
//pass by reference to avoid copying because it is not cheap to do that
void operator<<(ostream& os,Counter& c){
    os<< c.count;
}

Counter operator-(Counter c1,Counter c2){
    return c1.count-c2.count;
}

int main(){
    Counter c1(10);
    Counter c2(20);
    c1.increment();
    c1.print();
//    c1+c2; //invalid, we need to overload the + operator
    c1=c1+c2; //working now after i overloaded the + operator
    c1.print();
    c1=c1-c2;
    c1.increment();
    c1.print();
    cout<<c1;
    return 0;
}

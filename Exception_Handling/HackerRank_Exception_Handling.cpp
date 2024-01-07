#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int largest_proper_divisor(int n) {
    try{
        if (n == 0) {
            throw invalid_argument("largest proper divisor is not defined for n=0");
        }
        if (n == 1) {
            throw invalid_argument("largest proper divisor is not defined for n=1");
        }
    }
    catch(invalid_argument &i){
        cout<<i.what();
    }
    for (int i = n/2; i >= 1; --i) {
        if (n % i == 0) {
            return i;
        }
    }

    return -1; // will never happen
}

void process_input(int n) {
    int d = largest_proper_divisor(n);
    if(d!=-1){
        cout << "result=" << d << endl;
//        cout<<endl;
    }
    else{
        cout<<endl;
    }
}
int main() {
    int n;
    cin >> n;
    process_input(n);
    cout<<"returning control flow to caller\n";
    return 0;
}

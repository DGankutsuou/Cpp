#include<iostream>
using namespace std;
int main(){

    // a % a = 0
    // (a < b): a % b = a
    // (a > b): a % b = a - b (until a < b)
    cout<<5 % 5<<endl;
    cout<<5 % 6<<endl;
    cout<<15 % 7<<endl;

    return 0;
}
#include<iostream>
using namespace std;
int main(){

    int x = 5;
    cout<<&x<<endl; // output: 0x491bffd7c (example)
    int* y = &x; // you can't make it: int y = &x; or int* y = x or 5 
    cout<<y<<endl; // output: &x = 0x491bffd7c (example)
    cout<<*y<<endl; // output: x = 5
    cout<<&y<<endl; // output: &y = 0x491bffd70 (example)
    // y is a pointer

    return 0;
}
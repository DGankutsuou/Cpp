#include<iostream> // can we make a pointer without any variable?
using namespace std; 
int main(){

    int* p;
    cout<<p<<endl; // output: 0x10
    int* ptr = NULL;
    cout<<ptr<<endl; // output: 0 

    return 0;
}
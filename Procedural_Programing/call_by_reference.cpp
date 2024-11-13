#include<iostream>
using namespace std;
void set(int* a){
    *a = 0;
    cout<<"a in set = "<<*a<<endl;
}
int main(){

    int a = 5;
    cout<<"a before calling the set = "<<a<<endl; // output: 5
    set(&a); // output: 0
    cout<<"a after calling the set = "<<a<<endl; // output: 0
    // using the pointer you can change the value of a by the set.

    return 0;
}
#include<iostream>
using namespace std;
void set(int a){
    a = 0;
    cout<<"a in the set = "<<a<<endl;
}
int main(){

    int a = 5;
    cout<<"a before calling the set = "<<a<<endl;
    set(a); // output: 0
    cout<<"a after calling the set = "<<a<<endl; // output: 5
    // the a which is in the main is not the a which in set

    return 0;
}
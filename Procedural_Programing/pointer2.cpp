#include<iostream>
using namespace std;
int main(){

    int x = 5;
    int* p = &x;
    *p = 7; // you can change the value of the x with the pointer.
    cout<<x<<endl;
    int y[3] = {3,5,7};
    cout<<&y[0]<<endl;
    cout<<y<<endl; // this will give you &y[0]
    cout<<y+1<<endl; // this will give you &y[1]... etc
    cout<<*y<<endl; // this will give you y[0]
    cout<<*(y+1)<< endl; // this will give you y[1]... etc

    return 0;
}
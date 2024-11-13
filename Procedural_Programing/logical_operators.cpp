#include<iostream>
using namespace std;
int main(){

    /* 
    and = &&
    or = ||
    */
    int x = 5, y = 7, z = 5;
    cout<<"hello"<<endl;
    cout<<(x<y && x==z)<<endl; // 1
    cout<<(x>y||y>=z)<<endl; // 1
    cout<<(x>z && y<=x)<<endl; // 0
    cout<<(x==z||y==z)<<endl; // 1

    return 0;
}
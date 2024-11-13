#include<iostream>
using namespace std;
int main(){

    int a[3] = {1,2,3};
    a[0] = 5; // we can change the value of the int
    cout<<a[0]<<endl;
    const int b[3] = {6,7,8}; // we cannot change the value of the const
    cout<<b[0]<<endl;

    return 0;
}
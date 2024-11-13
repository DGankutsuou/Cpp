#include<iostream>
using namespace std;
// Find the maximum number between three numbers.
int maximum(int a, int b, int c){

    if(a > b && a > c){
        cout<<"The maximum number is: "<<a<<endl;
    }else if(b > a && b > c){
        cout<<"The maximum number is: "<<b<<endl;
    }else{
        cout<<"The maximum number is: "<<c<<endl;
    }

}
int main(){

    int a, b, c;
    cout<<"number 1: ";
    cin>>a;
    cout<<"number 2: ";
    cin>>b;
    cout<<"number 3: ";
    cin>>c;
    maximum(a, b, c);

    return 0;
}
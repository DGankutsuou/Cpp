#include<iostream>
using namespace std;
int main(){

    int number;
    cout<<"Enter your number: ";
    cin>>number;

    switch(number){
        case 119:
            cout<<"You are Ayman";
            break;
        case 130:
            cout<<"You are Hicham";
            break;
        default:
            cout<<"We do not know this number";
            break;

    }

    return 0;
}
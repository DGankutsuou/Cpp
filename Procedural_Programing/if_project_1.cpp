#include<iostream>
using namespace std;
int main(){ // project 1: Determine if a number is positive or negative.

    int number;
    cout<<"Enter a number and We will tell if it is positive or negative: ";
    cin>>number;
    if(number==0){
        cout<<"this number is 0";
    }else if(number<0){
        cout<<"this number is negative";
    }else{
        cout<<"this number is positve";
    }

    return 0;
}
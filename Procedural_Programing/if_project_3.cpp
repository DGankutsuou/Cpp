#include<iostream>
using namespace std;
int main(){ // if_project 3: Determine if a number is Even or Odd.

    int number;
    cout<<"Enter the number: ";
    cin>>number;
    if(number!=0){
        if(number%2 == 0){
        cout<<"The number"<<" "<<number<<" is even"<<endl;
    }else{
        cout<<"The number"<<" "<<number<<" is odd"<<endl;
    }    
    }else{
        cout<<"0 can not be even or odd"<<endl;
    }
    

    return 0;
}
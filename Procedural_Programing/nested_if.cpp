#include<iostream>
using namespace std;
int main(){

    int x;
    cout<<"x = ";
    cin>>x;
    if(x >= 18){
        if(x==18){ // nested if
            cout<<"You are able";
        }else if(x>100){
            cout<<"Are you human?";
            }else{
            cout<<"You are very able";
        }
    }else{
        cout<<"You are not able";
    }

    return 0;
}
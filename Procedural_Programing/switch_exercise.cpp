#include<iostream>
using namespace std;
int main(){

    char op;
    double n1, n2;
    cout<<"Choose an operator (+ or - or * or /): ";
    cin>>op;
    
    switch(op){
        case '+':
            cout<<"Enter two numbers:\n"<<"number 1: ";
            cin>>n1;
            cout<<" "<<op<<" "<<endl;
            cout<<"number 2: ";
            cin>>n2;
            cout<<endl;
            cout<<n1<<" "<<op<<" "<<n2<<" = "<<(n1 + n2)<<endl;
            break;
        case '-':
            cout<<"Enter two numbers:\n"<<"number 1: ";
            cin>>n1;
            cout<<" "<<op<<" "<<endl;
            cout<<"number 2: ";
            cin>>n2;
            cout<<endl;
            cout<<n1<<" "<<op<<" "<<n2<<" = "<<(n1 - n2)<<endl;
            break;
        case '*':
            cout<<"Enter two numbers:\n"<<"number 1: ";
            cin>>n1;
            cout<<" "<<op<<" "<<endl;
            cout<<"number 2: ";
            cin>>n2;
            cout<<endl;
            cout<<n1<<" "<<op<<" "<<n2<<" = "<<(n1 * n2)<<endl;
            break;
        case '/':
            cout<<"Enter two numbers:\n"<<"number 1: ";
            cin>>n1;
            cout<<" "<<op<<" "<<endl;
            cout<<"number 2: ";
            cin>>n2;
            cout<<endl;
            cout<<n1<<" "<<op<<" "<<n2<<" = "<<(n1 / n2)<<endl;
            break;
        default:
            cout<<"You can use only: (+ or - or * or /);"<<endl;
        }
    
    return 0;
}
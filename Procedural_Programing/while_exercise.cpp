#include<iostream>
using namespace std;
int main(){

    int number;
    int  sum = 0;
    int i = 1;
    cout<<"Enter the numbers:"<<endl;
    while(number>0){
        sum+=number;
        cout<<"Number "<<i<<":";
        cin>>number;
        i++;
    }
    cout<<"The sum is "<<sum<<endl;


    return 0;
}
#include<iostream>
using namespace std;
int main(){

    int gr;
    cout<<"Enter your grade: ";
    cin>>gr;
    if(gr == 0){
        cout<<"You are a dead man";
        }else if(gr>0 && gr<10){
        cout<<"You field in the exam";
    }else if(gr>=10 && gr<=15){
        cout<<"You have passed the exam";
    }else if(gr>15 && gr<20){
        cout<<"You have passed the exam with a high score";
    }else if(gr == 20){
        cout<<"You are great";
    }else{
        cout<<"that is not correct";
    }

    return 0;
}
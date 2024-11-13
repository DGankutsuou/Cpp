#include<iostream>
using namespace std;
void print(){
    cout<<"Ayman Abourizq"<<endl;
}
void print(int a, int b){
    for(int i = a; i < b + 1; i++){
        cout<<i + 1;
    }
}
int main(){

    print();
    print(3,23);

    return 0;
}
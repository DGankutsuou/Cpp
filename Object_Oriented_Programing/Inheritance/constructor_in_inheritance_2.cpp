#include<iostream>
using namespace std;
class First{
    public:
        First(int i){ // parametrized constructor
            cout<<"First = "<<i<<endl;
        }
};
class Second:public First{
    public:
        Second(int i, int x):First(i){
            cout<<"Second = "<<x<<endl;
        }
};
int main(){

    First ob1(12);
    Second ob2(20,10);

    return 0;
}
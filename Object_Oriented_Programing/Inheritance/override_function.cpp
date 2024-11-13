#include<iostream>
using namespace std;
class Base{
    public:
        void print(){
            cout<<"I am base function"<<endl;
        }
};
class A : public Base{
    public:
        void print(){
            Base::print(); // this make the function call them all
            cout<<"I am A function"<<endl;
        }
};
int main(){

    A ob1;
    ob1.Base::print(); // You call it alone like this
    ob1.print(); 

    return 0;
}
#include<iostream>
using namespace std;
class Count{
    public:
        int x = 0;
    public:
        Count():x (20){}
        int operator ++(){
            ++x;
            return x;
        }
        void print(){
            cout<<"x = "<<x<<endl;
        }
};
int main(){

    Count ob1;
    ob1.print();
    Count ob2;
    ob2.print();
    ob2.x = ++ob1;
    ob2.print();

    return 0;
}
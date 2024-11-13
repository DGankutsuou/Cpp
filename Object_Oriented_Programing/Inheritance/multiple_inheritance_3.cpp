#include<iostream>
using namespace std;
class First{
    private:
        int x;
        int k;
    public:
        First(int a, int d){
            x = a;
            k = d;
        }
        void print(){
            cout<<"x = "<<x<<endl;
            cout<<"k = "<<k<<endl;
        }
};
class Second{
    private:
        int y;
    public:
        Second(int b){
            y = b;
        }
        void print(){
            cout<<"y = "<<y<<endl;
        }
};
class Third{
    private:
        int z;
    public:
        Third(int c){
            z = c;
        }
        void print(){
            cout<<"z = "<<z<<endl;
        }
};
class Fourth : public First , public Second , public Third{
    public:
        Fourth(int a, int d, int b, int c):First(a, d), Second(b), Third(c){}
        void print(){
            First::print();
            Second::print();
            Third::print();
            cout<<"I am the Fourth"<<endl;
        }
};
int main(){

    Fourth ob1(12,45,23,34);
    ob1.print();

    return 0;
}
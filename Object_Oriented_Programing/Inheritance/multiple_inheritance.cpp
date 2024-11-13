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
        void printx(){
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
        void printy(){
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
        void printz(){
            cout<<"z = "<<z<<endl;
        }
};
class Fourth : public First , public Second , public Third{
    public:
        Fourth(int a, int d, int b, int c):First(a, d), Second(b), Third(c){}
};
int main(){

    Fourth ob1(12,45,23,34);
    ob1.printx();
    ob1.printy();
    ob1.printz();

    return 0;
}
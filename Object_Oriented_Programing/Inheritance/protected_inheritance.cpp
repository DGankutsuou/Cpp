#include<iostream>
using namespace std;
class First{
    public:
        int x = 12;
    private:
        int y = 32;
    protected:
        int z = 45;
};
class Second : public First{
    public:
        void print(){
            cout<<"x = "<<x<<endl;
            cout<<"y = "<<"error"<<endl; // you can't include y because it is private;
            cout<<"z = "<<z<<endl; // you can include protected variables in this class; 
        }
};
int main(){

    Second ob1;
    ob1.print();
    // you can't include protected variables in int main() or other classes;

    return 0;
}
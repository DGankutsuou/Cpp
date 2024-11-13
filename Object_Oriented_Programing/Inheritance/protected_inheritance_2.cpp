#include<iostream>
using namespace std;
class First{
    public:
        int x = 12;
    private:
        int y = 23;
    protected:
        int z = 34;
};
class Second : protected First{ // public will become protected
    /*
    protected:
        int x = 12;
    private:
        int y = 23;
    protected:
        int z = 34;
    */
    public:
        void print(){
            cout<<"x = "<<x<<endl;
            cout<<"y = "<<"error"<<endl;
            cout<<"z = "<<z<<endl;
    }

};
int main(){

    Second ob1;
    ob1.print();

    return 0;
}
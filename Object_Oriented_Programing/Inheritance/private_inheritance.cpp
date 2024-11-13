#include<iostream>
using namespace std;
class First{
    private:
        int x;
    public:
        void print(int a){
            x = a;
            cout<<"x = "<<x<<endl;
        }
};
class Second : private First{ // public will become private and protected will stay protected
    /*
    private:
        int x;
    private:
        void print(){
            cout<<"x = "<<x<<endl;
        }
    */
};
int main(){

    First ob1;
    Second ob2;
    ob1.print(10);
    // ob2.print(20); // OUTPUT: error

    return 0;
}
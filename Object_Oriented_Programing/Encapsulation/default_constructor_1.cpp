#include<iostream>
using namespace std;
class Test{
    private:
        int a;
        int b;
    public:
        void set(){
            int* x = &a;
            int* y = &b;
            *x = 10;
            *y = 20;
        }
        void show(){
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
        }
};
int main(){

    Test ob;
    ob.set();
    ob.show();

    return 0;
}
#include<iostream>
using namespace std;
class Test{
    private:
        int a;
        int b;
    public:
        Test(){
            a = 10;
            b = 20;
        }
        void show(){
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
        }
};
int main(){

    Test ob;
    Test ob1;
    ob.show();

    return 0;
}
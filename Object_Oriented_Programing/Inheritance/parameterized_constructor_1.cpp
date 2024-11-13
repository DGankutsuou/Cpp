#include<iostream>
using namespace std;
class Test{
    private:
        int a;
        int b;
    public:
        Test(){
            cout<<"Hi I am constractor"<<endl;
        }
        Test(int x, int y){ // parameterized costructors seems like the overloading functions.
            a = x;
            b = y;
        }
        void show(){
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
        }
};
int main(){

    Test ob(10, 20); 
    Test ob1;
    ob.show();

    return 0;
}
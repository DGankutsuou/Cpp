#include<iostream>
using namespace std;
class Sum{
    private:
        int x = 0;
    public:
        void set(){
            cout<<"Enter x: ";
            cin>>x;
        }
        void sum1(Sum ob1, Sum ob2){
            cout<<ob1.x<<" + "<<ob2.x<<" is: "<<(ob1.x + ob2.x)<<endl;
        }
        void sum2(Sum ob){
            cout<<x<<" + "<<ob.x<<" is: "<<(x + ob.x)<<endl;
        }
        void operator +(Sum ob){
            cout<<x<<" + "<<ob.x<<" is: "<<(x + ob.x)<<endl;
        }
};
int main(){

    Sum ob1;
    ob1.set();
    Sum ob2;
    ob2.set();
    ob1.sum1(ob1, ob2);
    ob1.sum2(ob2);
    ob1 + ob2;

    return 0;
}
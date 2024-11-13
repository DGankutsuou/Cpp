#include<iostream>
using namespace std;
class Cal{
    private:
        double x = 0;
        double y = 0;
    public:
        void set(){
            cout<<"x = ";
            cin>>x;
            cout<<"y = ";
            cin>>y;
        }
        void minus1(Cal ob1, Cal ob2){
            cout<<ob1.x<<" - "<<ob2.y<<" = "<<(ob1.x - ob2.y)<<endl;
        }
        void minus2(Cal ob){
            cout<<x<<" - "<<ob.y<<" = "<<(x - ob.y)<<endl;
        }
        void operator -(Cal ob){
            cout<<x<<" - "<<ob.y<<" = "<<(x - ob.y)<<endl;
        }
};
int main(){

    Cal ob1;
    ob1.set();
    Cal ob2;
    ob2.set();
    ob1.minus1(ob1, ob2);
    ob1.minus2(ob2);
    ob1 - ob2;

    return 0;
}
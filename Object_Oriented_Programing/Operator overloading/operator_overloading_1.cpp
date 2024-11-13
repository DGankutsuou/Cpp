#include<iostream>
using namespace std;
class Compire{
    private:
        int x = 0;
    public:
        void set(){
            cout<<"x = ";
            cin>>x;
        }
        void compire1(Compire ob1, Compire ob2){
            if(ob1.x == ob2.x){
                cout<<"They are equal"<<endl;
            }else{
                cout<<"They are not equal"<<endl;
            }
        }
        void compire2(Compire ob){
            if(x == ob.x){
                cout<<"They are equal"<<endl;
            }else{
                cout<<"They are not equal"<<endl;
            }
        }
        void compire3(Compire ob){
            cout<<(x == ob.x)<<endl;
        }
        void operator ==(Compire ob){
            cout<<(x == ob.x)<<endl;
        }
};
int main(){

    Compire ob1;
    ob1.set();
    Compire ob2;
    ob2.set();
    ob1.compire1(ob1, ob2);
    ob1.compire2(ob2);
    ob1.compire3(ob2);
    ob1 == ob2;

    return 0;
}
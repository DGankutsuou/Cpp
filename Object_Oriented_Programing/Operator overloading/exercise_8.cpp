#include<iostream>
using namespace std;
class Form{
    private:
        string name = "unkown";
    public:
        void set(){
            cout<<"Enter name: ";
            cin>>name;
        }
        void Full1 (Form ob1, Form ob2){
            cout<<"FullName is: "<<(ob1.name + ob2.name)<<endl;
        }
        void Full2 (Form ob){
            cout<<"FullName is: "<<(name + ob.name)<<endl;
        }
        void operator +(Form ob){
            cout<<"FullName is: "<<(name + ob.name)<<endl;
        }
};
int main(){

    Form ob1;
       ob1.set();
    Form ob2;
       ob2.set();
       ob1.Full1(ob1, ob2);
       ob1.Full2(ob2);
       ob1 + ob2;

    return 0;
}
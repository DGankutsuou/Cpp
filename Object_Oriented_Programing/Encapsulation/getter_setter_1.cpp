#include<iostream> // Make the printing member function print what you want.
using namespace std;
class Company{
    private:
        string name;
        int id;
    public:
        void set(){
            cout<<"Enter your name: ";
            cin>>name;
            cout<<"Enter your ID: ";
            cin>>id;
        }
        void print(string printed){
            if(printed == "name"){
                cout<<"Your name is "<<name<<endl;
            }else if(printed == "id"){
                cout<<"Your ID is "<<id<<endl;
            }else{
                cout<<"Error"<<endl;
            }
        }
};
int main(){

    Company ob1;
    ob1.set();
    ob1.print("name");
    ob1.print("id");

    return 0;
}
#include<iostream>
using namespace std;
class Company{
    private:
        int id;
        string name;
        string salary;
    public:
        void enter();
        void print();
};
int main(){

    Company ob1;
    ob1.enter();
    ob1.print();

    return 0;
}
void Company::enter(){
    cout<<"id: ";
    cin>>id;
    cout<<"name: ";
    cin>>name;
    cout<<"salary: ";
    cin>>salary;
}
void Company::print(){
    cout<<id<<" "<<name<<" "<<salary<<endl;
}
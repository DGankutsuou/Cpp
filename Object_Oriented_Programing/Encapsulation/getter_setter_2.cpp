#include<iostream>
using namespace std;
class Company{
    private:
        string name;
        double salary;
    public:
        void set(){
            cout<<"Enter your name: ";
            cin>>name;
            cout<<"Enter your salary: ";
            cin>>salary;
        }
        void printAll(){
            cout<<"Your name is "<<name<<endl;
            cout<<"Your salary is "<<salary<<endl;
        }
        void printName(){
            cout<<"Your name is "<<name<<endl;
        }
        void printSalary(){
            cout<<"Your salary is "<<salary<<endl;
        }
        double salariesSum(Company ob1, Company ob2){
            return ob1.salary + ob2.salary;
        }
};
int main(){

    Company ob1;
    ob1.set();
    ob1.printAll();
    ob1.printName();
    ob1.printSalary();
    Company ob2;
    ob2.set();
    ob2.printAll();
    ob2.printName();
    ob2.printSalary();
    cout<<"Salaries sum is "<<ob1.salariesSum(ob1,ob2)<<endl;

    return 0;
}
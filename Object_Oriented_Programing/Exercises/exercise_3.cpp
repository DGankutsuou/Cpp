#include<iostream>
using namespace std;
class Engineer;
class Teacher{
    private:
        string name;
        int salary;
    public:
        Teacher(){
            cout<<"Enter your name: ";
            cin>>name;
            cout<<"Enter your salary: ";
            cin>>salary;
        }
        friend void add(Teacher o1, Engineer o2);
};
class Engineer{
    private:
        string name;
        int salary;
    public:
        Engineer(){
            cout<<"Enter your name: ";
            cin>>name;
            cout<<"Enter your salary: ";
            cin>>salary;
        }
        friend void add(Teacher o1, Engineer o2);
};
void add(Teacher o1, Engineer o2){
    if(o1.name == "Ali"){
        o1.salary += 1000;
    }
    cout<<"The salary of "<<o1.name<<" is: "<<o1.salary<<endl;
    if(o2.name == "Ahmad"){
        o2.salary += 1000;
    }
    cout<<"The salary of "<<o2.name<<" is: "<<o2.salary<<endl;
}
int main(){

    Teacher ob1;
    Engineer ob2;
    add(ob1, ob2);

    return 0;
}
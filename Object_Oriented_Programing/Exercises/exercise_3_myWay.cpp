#include<iostream>
using namespace std;
class Teacher{
    private:
        string name;
        int salary;
    public:
        Teacher(string n, int s){
            name = n;
            salary = s;
        }
        friend int add(Teacher ob){
            return ob.salary + 1000;
        } // we don't need to make the friend function prototype WoW.
};
class Engineer : public Teacher{
        public:
            Engineer(string n, int s):Teacher(n,s){}
};
int main(){

    Teacher ob1("Ali", 700);
    cout<<add(ob1)<<endl;
    Engineer ob2("Ahmad", 1000);
    cout<<add(ob2)<<endl;

    return 0;
} // this was my way
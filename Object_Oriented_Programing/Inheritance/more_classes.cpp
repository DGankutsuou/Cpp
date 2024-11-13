#include<iostream>
using namespace std;
class Person{
    private:
        string name;
        int age;
    public:
        Person(string n, int a){
            name = n;
            age = a;
        }
        void show(){
            cout<<"Your name is "<<name<<endl;
            cout<<"Your age is "<<age<<endl;
        }
};
class Student{
    public:
        int id;
        string salary;
};
int main(){

    Person ob1("Ayman", 18);
    ob1.show();
    Student ob2;
    ob2.id = 2000378;
    ob2.salary = 95;
    printf("%d\n", ob2.id); // To remember the old days;

    return 0;
}
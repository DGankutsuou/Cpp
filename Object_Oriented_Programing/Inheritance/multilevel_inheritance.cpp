#include<iostream>
using namespace std;
class Person{
    private:
        int age;
        string name;
    public:
        Person(int a, string n){
            age = a;
            name = n;
        }
        void print(){
            cout<<"Your age is: "<<age<<endl;
            cout<<"Your name is: "<<name<<endl;
        }
};
class Employee : public Person{
    private:
        int id;
        int salary;
    public:
        Employee(int a, string n, int i, int s):Person(a,n){
            id = i;
            salary = s;
        }
        void print(){
            Person::print();
            cout<<"Your ID is: "<<id<<endl;
            cout<<"Your salary is: "<<salary<<endl;
        }
};
class Student : public Employee{
    private:
        string email;
    public:
        Student(int a, string n, int i, int s, string e):Employee(a,n,i,s){
            email = e;
        }
        void print(){
            Employee::print();
            cout<<"Your email is: "<<email<<endl;
        }
};
int main(){

    Person ob1(18, "Ayman");
    ob1.print();
    cout<<"****************"<<endl;
    Employee ob2(19, "Yassine", 22000378, 1000);
    ob2.print();
    cout<<"****************"<<endl;
    Student ob3(20, "Anass", 2333309, 90, "email@gmail.com");
    ob3.print();

    return 0;
}
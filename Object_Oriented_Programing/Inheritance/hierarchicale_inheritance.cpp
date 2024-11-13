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
            cout<<"Your name is "<<name<<endl;
            cout<<"Your age is "<<age<<endl;
        }
        void set(){
            cout<<"Your age is: ";
            cin>>age;
            cout<<"Your name is: ";
            cin>>name;
        }
};
class Student : public Person{
    private:
        int grade;
    public:
        Student(int a, string n, int g):Person(a, n){
            grade = g;
        }
        void print(){
            Person::print();
            cout<<"Your grade is "<<grade<<endl;
        }
};
class Employee : public Person{
    private:
        int id;
        int salary;
    public:
        Employee(int a, string n, int i, int s):Person(a, n){
            id = i;
            salary = s;
        }
        void print(){
            Person::print();
            cout<<"Your id is: "<<id<<endl;
            cout<<"Your salary is: "<<salary<<endl;
        }
};
int main(){

    Person ob1(18, "Ayman");
    Student ob2(19, "Anass", 100);
    Employee ob3(20, "Yassine", 22000378, 1000);
    ob1.print();
    ob2.print();
    ob3.print();

    return 0;
}
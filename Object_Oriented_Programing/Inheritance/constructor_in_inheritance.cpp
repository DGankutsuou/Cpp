#include<iostream>
using namespace std;
class Person{
    private:
        string name;
    public:
        Person(){ // default constructor
            name = "Ayman";
        }
        void print(){
            cout<<"Your name is "<<name<<endl;
        }
};
class Student:public Person{
    private:
        int grade;
    public:
        Student(int g){
            grade = g;
        }
        void show(){
            cout<<"Your grade = "<<grade<<endl;
        }
};
int main(){

    Person ob1;
    ob1.print();
    Student ob2(100);
    ob2.print();
    ob2.show();

    return 0;
}
#include<iostream>
using namespace std;
class Student{
    private:
        string name = "unkown";
        int age = 0;
        int grade = 0;
        int id = 0;
    public:
        Student(string n, int a, int g, int i){
            name= n;
            age = a;
            grade = g;
            id = i;
        }
        friend class University;
};
class University{
    public:
        void print(Student ob);
};
void University::print(Student ob){
    cout<<"Your name is: "<<ob.name<<endl;
    cout<<"Your age is: "<<ob.age<<endl;
    cout<<"Your grade is: "<<ob.grade<<endl;
    cout<<"Your id is: "<<ob.id<<endl;
}
int main(){

    Student ob1("Ayman", 18, 100, 22000378);
    University ob2;
    ob2.print(ob1);

    return 0;
}
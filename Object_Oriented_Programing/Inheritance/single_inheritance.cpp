#include<iostream>
using namespace std;
class person{
    private:
        string name;
    public:
        void setName(string n){
            name = n;
        }
        void print(){
            cout<<"Your name is "<<name<<endl;
        }
};
class student:public person{ // single inheritance
    private:
        int grade;
    public:
        void setGrade(int g){
            grade = g;
        }
        void display(){
            cout<<"Your grade is "<<grade<<endl;
        }
};
int main(){

    person ob1;
    ob1.setName("Ayman");
    ob1.print();
    student ob2;
    ob2.setGrade(100);
    ob2.display();
    ob2.setName("Anass");
    ob2.print();

    return 0;
}
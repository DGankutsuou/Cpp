#include<iostream>
using namespace std;
class Student{
    private:
        string name;
        int mark;
    public:
        Student(string n, int m);
        Student();
        friend int sum(Student o1, Student o2, Student o3);
        void checkMarks(Student o1, Student o2, Student o3);
};
int main(){

    Student ob1("Ahmad", 100);
    Student ob2("Ali", 100);
    Student ob3("Nour", 100);
    cout<<"Sum is "<<sum(ob1, ob2, ob3)<<endl;
    ob1.checkMarks(ob1, ob2, ob3);

    return 0;
}
Student::Student(string n, int m){
            name = n;
            mark = m;
        }
Student::Student(){
            cout<<"Your name is: ";
            cin>>name;
            cout<<"Your mark is: ";
            cin>>mark;
        }
int sum(Student o1, Student o2, Student o3){
    return o1.mark + o2.mark + o3.mark;
}
void Student::checkMarks(Student o1, Student o2, Student o3){
    if((o1.mark > o2.mark) && (o1.mark > o3.mark)){
        cout<<o1.name<<" is the first student"<<endl;
    }else if((o2.mark > o1.mark) && (o2.mark > o3.mark)){
        cout<<o2.name<<" is the first student"<<endl;
    }else if((o3.mark > o1.mark) && (o3.mark > o2.mark)){
        cout<<o3.name<<" is the first student"<<endl;
    }else if(o1.mark == o2.mark && o3.mark == o2.mark){
        cout<<"Student's marks are equal"<<endl;
    }else if(o1.mark == o2.mark){
        cout<<o1.name<<" and "<<o2.name<<" are the first"<<endl;
    }else if(o1.mark == o3.mark){
        cout<<o1.name<<" and "<<o3.name<<" are the first"<<endl;
    }else if(o3.mark == o2.mark){
        cout<<o3.name<<" and "<<o2.name<<" are the first"<<endl;
    }
}
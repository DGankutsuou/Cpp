#include<iostream>
using namespace std;
class Student1{
    private:
        int mark1 = 0;
        string name = "unkown";
    public:
        Student1(int m, string n){
            mark1 = m;
            name = n;
        }
        void print(){
            cout<<"Your name is "<<name<<endl;
            cout<<"Your mark is "<<mark1<<endl;
        }
        friend class Student2;
};
class Student2{
    private:
     int mark2 = 0;
     string name = "unkown";
    public:
        Student2(string n){
            name = n;
        }
        void setMark(Student1 ob){
            mark2 = ob.mark1;
        }
        void print(){
            cout<<"Your name is "<<name<<endl;
            cout<<"Your mark is "<<mark2<<endl;
        } 
};
int main(){

    Student1 ob1(100, "Ayman");
    Student2 ob2("Yassine");
    ob1.print();
    ob2.setMark(ob1);
    ob2.print();

    return 0;
}
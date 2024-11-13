#include<iostream>
using namespace std;
class Student{
    private:
        string name = "unkown";
        int age = 0;
        int mark = 0;
    public:
        void setValues(){
            cout<<"Give me your informations please:"<<endl;
            cout<<"Your name: ";
            cin>>name;
            cout<<"Your age: ";
            cin>>age;
            cout<<"Your mark: ";
            cin>>mark;
        }
};
int main(){

    Student ob[4];
    for(int i = 0; i < 4; i++){
        ob[i].setValues();
    }

    return 0;
}
#include<iostream>
using namespace std;
class Workers{
    private:
        string name;
        int salary;
    public:
        Workers(){
            cout<<"***"<<endl;
            cout<<"Your name is: ";
            cin>>name;
            cout<<"Your salary is: ";
            cin>>salary;
            cout<<"***"<<endl;
        }
        friend int average(Workers o1, Workers o2, Workers o3);
};
int average(Workers o1, Workers o2, Workers o3){
    return (o1.salary + o2.salary + o3.salary) / 3;
}
int main(){

    Workers ob1;
    Workers ob2;
    Workers ob3;
    cout<<"The average of the salaries is "<<average(ob1,ob2,ob3)<<endl;

    return 0;
}
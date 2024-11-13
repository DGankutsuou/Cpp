#include<iostream>
using namespace std;
class Company{
    private:
        int id;
        string name;
        string salary;
        
    public:
        void add(int i, string n, string s);
        void print();
};
int main(){

    Company ob1;
    ob1.add(2000378,"Ayman Abourizq","95$");
    ob1.print();

    return 0;
}
void Company::print(){
        cout<<id<<" "<<name<<" "<<salary<<endl;
}
void Company::add(int i, string n, string s){
    id = i;
    name = n;
    salary = s;
}
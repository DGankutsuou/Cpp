#include<iostream>
using namespace std;

class Company{
    public:
        int id;
        string name;
        double salary;
    void save(int i, string n, double s);
    void display();
};
void Company::save(int i, string n, double s){
    id = i;
    name = n;
    salary = s;
}
void Company::display(){
    cout<<id<<" "<<name<<" "<<salary<<endl;
}

int main(){

    Company ob1;
    ob1.save(2000378, "Ayman Abourizq", 95.05);
    ob1.display();

    return 0;
}
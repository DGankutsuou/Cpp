#include<iostream>
using namespace std;
class Books{
    public:
        string name;
        string author;
        int pages;
        string price;
    void print(){ // this is a member function.
        cout<<"Book name is "<<name<<endl;
        cout<<"Book author is "<<author<<endl;
        cout<<"Book pages are "<<pages<<endl;
        cout<<"Book price is "<<price<<endl;
    }
};
int main(){

    Books ob1;
    ob1.name = "Samarqand";
    ob1.author = "Amine Maalouf";
    ob1.pages = 200;
    ob1.price = "50$";
    ob1.print();

    return 0;
}
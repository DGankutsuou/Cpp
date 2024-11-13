#include<iostream>
using namespace std;
class Books{
    public:
        string author;
        int pages;
    Books(){
        cout<<"Hi I am constructor"<<endl;
    }
    void print(){
        cout<<"Hi I am function"<<endl;
        cout<<author<<endl;
        cout<<pages<<endl;
    }
};

int main(){

    Books ob1;
    ob1.author = "Osho";
    ob1.pages = 93;
    ob1.print();
    Books ob2; // it will print Hi I am constructor every time I make a Books object.
    Books ob3;

    return 0;
}
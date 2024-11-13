#include<iostream>
using namespace std;
class Books{
    public:
    string name;
    int pages;
    string author;
    string price;
};
void print(Books op){
    cout<<"_____________________________"<<endl;
    cout<<"Book name is "<<op.name<<endl;
    cout<<"Book peges are "<<op.pages<<endl;
    cout<<"Book author is "<<op.author<<endl;
    cout<<"Book price is "<<op.price<<endl;
    cout<<"_____________________________"<<endl;
}
int main(){

    Books op1;
    op1.name = "Cretivity";
    op1.pages = 93;
    op1.author = "Osho";
    op1.price = "50$";
    Books op2;
    op2.name = "Antichristos";
    op2.pages = 312;
    op2.author = "Ahmad Khalid Mostafa";
    op2.price = "60$";
    print(op1);
    print(op2);

    return 0;
}
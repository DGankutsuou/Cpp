#include<iostream>
using namespace std;
class Yt{
    public:
        string name;
    void print(Yt ob);
    void set(Yt ob1);
};
int main(){

    Yt ob1;
    Yt ob2;
    ob1.name = "I am so proud of you";
    ob2.name = "Keep going";
    ob2.print(ob1); // OUTPUT: ob2.name
    ob1.set(ob2); // OUTPUT: ob2.name

    return 0;
}
void Yt::print(Yt ob){
    cout<<"The name of the channel is "<<name<<endl;
}
void Yt::set(Yt ob1){
    cout<<"Channel name is "<<ob1.name<<endl;
}
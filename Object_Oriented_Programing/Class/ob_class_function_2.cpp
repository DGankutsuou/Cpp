#include<iostream>
using namespace std;
class Yt{
    public:
        string name;
    void print(Yt ob){
        cout<<"Channel name is "<<ob.name<<endl;
    }
    void print(){
        cout<<"The name of the channel is "<<name<<endl;
    }
};
int main(){

    Yt ob;
    Yt ob1;
    Yt ob2;
    ob1.name = "Hemo calisthenics";
    ob2.name = "RILTIM";
    ob1.print(ob1); // OUTPUT: ob1.name
    ob1.print(ob2); // OUTPUT: ob2.name 
    ob2.print(ob1); // OUTPUT: ob1.name
    ob2.print(ob2); // OUTPUT: ob2.name
    ob.print(ob1); // OUTPUT: ob1.name
    ob.print(ob2); // OUTPUT: ob2.name
    ob1.print(); // OUTPUT: ob1.name
    ob2.print(); // OUTPUT: ob2.name
    // I gave the two functions the same name because the don't receirve the same thing.

    return 0;
}
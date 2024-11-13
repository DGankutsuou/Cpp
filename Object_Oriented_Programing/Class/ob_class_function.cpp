#include<iostream>
using namespace std;
class Yt{
    public:
        string name;
};
void print(Yt ob){
    cout<<ob.name<<endl;
}
int main(){

    Yt ob1;
    ob1.name = "Hemo calisthenics";
    print(ob1);

    return 0;
}
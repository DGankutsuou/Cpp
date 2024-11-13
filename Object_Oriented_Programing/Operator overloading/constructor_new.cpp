#include<iostream>
using namespace std;
class Count{
    private:
        int value = 0;
        int x = 0;
    public:
        Count():value (20), x (10){
            cout<<"Hello"<<endl;
            cout<<"value is: "<<value<<endl;
            cout<<"x is: "<<x<<endl;
        }
};
int main(){

    Count ob;

    return 0;
}
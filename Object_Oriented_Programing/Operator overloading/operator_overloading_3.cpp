#include<iostream>
using namespace std;
class Count{
    private:
        int x = 0;
    public:
        Count(int y){
            x = y;
        }
        void operator =(Count ob){
            x = ob.x;
        }
        void print(){
            cout<<"x = "<<x<<endl;
        }
};
int main(){

    Count ob1(20);
    ob1.print();
    Count ob2(10);
    ob2.print();
    ob2 = ob1;
    ob2.print();

    return 0;
}
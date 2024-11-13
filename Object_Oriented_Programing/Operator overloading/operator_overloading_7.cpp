#include<iostream>
using namespace std;
class Count{
    private:
        int x = 0;
    public:
        Count():x (20){}
        Count operator +(Count ob1){
            Count ob2;
            ob2.x = x + ob1.x;

            return ob2;
        }
        /*void operator =(Count ob){
            x = ob.x;
        }*/
        void print(){
            cout<<"x = "<<x<<endl;
        }
};
int main(){

    Count ob1;
    Count ob2;
    Count result;
    result = ob1 + ob2;
    ob1.print();
    ob2.print();
    result.print();

    return 0;
}
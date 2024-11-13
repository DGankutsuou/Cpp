#include<iostream>
using namespace std;
class Count{
    private:
        int x = 0;
    public:
        Count():x (20){}
        Count operator ++(){
            Count ob;
            ob.x = ++x;
            return ob;
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
    ob1.print();
    Count ob2;
    ob2.print();
    ob2 = ++ob1;
    ob1.print();
    ob2.print();

    return 0;
}
#include<iostream>
using namespace std;
class Postfix{
    private:
        int x = 0;
    public:
        void set(){
            cout<<"x = ";
            cin>>x;
        }
        void add(){
            x++;
        }
        void operator ++(int){ // postfix
            x++;
        }
        void show(){
            cout<<"x = "<<x<<endl;
        }
};
int main(){

    Postfix ob;
    ob.set();
    ob.show();
    ob.add();
    ob.show();
    ob++;
    ob.show();

    return 0;
}
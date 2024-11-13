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
         void show(){
            cout<<"x = "<<x<<endl;
        }
        void operator +=(int y){
            x+=y;
        }
        void operator -=(int y){
            x-=y;
        }
        void operator *=(int y){
            x*=y;
        }
        void operator /=(int y){
            x/=y;
        }
        void operator %=(int y){
            x%=y;
        }
        // Postfix
        void operator ++(int){
            x++;
        }
        void operator --(int){
            x--;
        }
        // Prefix
        void operator ++(){
            x++;
        }
        void operator --(){
            x--;
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
    ob--;
    ob.show();
    ++ob;
    ob.show();
    --ob;
    ob.show();
    ob+=20;
    ob.show();
    ob-=10;
    ob.show();
    ob*=5;
    ob.show();
    ob/=5;
    ob.show();
    ob%=2;
    ob.show();

    return 0;
}
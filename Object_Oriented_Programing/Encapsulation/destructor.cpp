#include<iostream>
using namespace std;
class Sample{
    private:
        int x;
        int y;
    public:
        Sample(){
            x = 10;
            y = 20;
        }
        ~Sample(/*destructor has no overloading*/){ // you can make only one destructor.
            cout<<"bye"<<endl;
        }
        void show(){
            cout<<"x = "<<x<<endl;
            cout<<"y = "<<y<<endl;
        }

};
int main(){

    Sample ob;
    ob.~Sample(); // you can include the destructor.
    ob.show(); // the destractor made delete the value of x and y.
    // but the OUTPUT did not delete it. why?

    return 0;
} // the destructor will be activated here allways.
#include<iostream>
using namespace std;
class Rect{
    public:
        int width;
        int height;
    int product(){
        return width * height;
    }
};
int main(){

    Rect ob1;
    ob1.width = 20;
    ob1.height = 100;
    cout<<ob1.product()<<endl;

    return 0;
}
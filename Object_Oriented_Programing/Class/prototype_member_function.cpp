#include<iostream>
using namespace std;
class rect{
    public:
        int width;
        int height;
        int product();
};
int rect::product(){
    return width * height;
}
int main(){

    rect ob1;
    ob1.width = 20;
    ob1.height = 100;
    cout<<ob1.product()<<endl;   

    return 0;
}
// I can also put the member prototype function her under the main().
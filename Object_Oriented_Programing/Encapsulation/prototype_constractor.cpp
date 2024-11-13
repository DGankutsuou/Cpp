#include<iostream>
using namespace std;
class Cal{
    private:
        int x;
        int y;
    public:
        Cal();
        int sum();
};
Cal::Cal(){
    x = 10;
    y = 20;
}
int Cal::sum(){
    return x + y;
}
int main(){

    Cal ob;
    cout<<ob.sum()<<endl;

    return 0;
}
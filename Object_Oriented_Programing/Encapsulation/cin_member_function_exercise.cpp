#include<iostream>
#include<cmath>
using namespace std;
class Circle{
    private:
        double radius;
    public:
        void setValue();
        void printArea();
};
int main(){

    Circle ob1;
    ob1.setValue();
    ob1.printArea();

    return 0;
}
void Circle::setValue(){
    cout<<"radius = ";
    cin>>radius;
}
void Circle::printArea(){
    double area = 3.14 * pow(radius,2);
    cout<<"area = "<<area<<endl;
}
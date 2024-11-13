#include<iostream>
using namespace std;
static int number = 1;
class Rectangle{
    private:
        double length;
        double width;
        double area;
    public:
        Rectangle(){
            cout<<"*********"<<endl;
            cout<<"Rectangle number "<<number<<endl;
            cout<<"Rectangle's length: ";
            cin>>length;
            cout<<"Rectangle's width: ";
            cin>>width;
            cout<<"*********"<<endl;
            area = length * width;
            number++;
        }
        void find(Rectangle o1, Rectangle o2);
};
int main(){

    Rectangle ob1;
    Rectangle ob2;
    ob1.find(ob1, ob2);
    Rectangle ob3;
    Rectangle ob4;

    return 0;
}
void Rectangle::find(Rectangle o1, Rectangle o2){
    if(o1.area > o2.area){
        cout<<"The bigest rectangle is number "<<1<<" with area = "<<o1.area<<endl;
    }else if(o1.area < o2.area){
        cout<<"The bigest rectangle is number "<<2<<" with area = "<<o2.area<<endl;
    }else{
        cout<<"Rectangles number "<<1<<" and "<<2<<" are equal"
        <<" with area = "<<o1.area<<" = "<<o2.area<<endl;
    }
}
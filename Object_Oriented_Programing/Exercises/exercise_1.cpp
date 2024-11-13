#include<iostream>
using namespace std;
class Car{
    private:
        string color;
        string mark;
        int price;
    public:
        Car(string c, string m, int p){
            color = c;
            mark = m;
            price = p;
        }
        void display();
        friend int increase(Car ob);
};
void Car::display(){
    cout<<"The price of the car is: "<<price<<endl;
}
int increase(Car ob){
    return ob.price + 1000;
}
int main(){

    Car ob1("black", "mercedes", 100000);
    ob1.display();
    cout<<increase(ob1)<<endl;

    return 0;
}
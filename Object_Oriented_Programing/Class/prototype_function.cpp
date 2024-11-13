#include<iostream> // x = 1 and y = 2 // Make x = 2 and y = 1
using namespace std;
void change(int x, int y); // prototype function.
int main(){

    int x = 1;
    int y = 2;
    change(x, y);

    return 0;
}
void change(int x, int y){ 
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
}
#include<iostream>
using namespace std;
void print(){ // The void function return nothing.
    cout<<"ohio minna sama"<<endl;
}
void sum(int x, int y){
    cout<<x<<" + "<<y<<" = "<<(x + y)<<endl;
}
// we don't cout the function if it allready has cout.
int main(){

    print();
    sum(5, 6);

    return 0;
}
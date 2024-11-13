#include<iostream>
using namespace std;
void change(int* a, int* b){
    int chg;
    chg = *a;
    *a = *b;
    *b = chg;
}
int main(){

    int a = 5, b = 9;
    cout<<"before calling the change a = "<<a<<" and b = "<<b<<endl;
    change(&a, &b);
    cout<<"after calling the change a = "<<a<<" and b = "<<b<<endl;

    return 0;
}
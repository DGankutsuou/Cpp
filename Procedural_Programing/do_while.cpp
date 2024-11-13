#include<iostream>
using namespace std;
int main(){ // do_while makes the effect before checking from the condition.

    int x = 1;
    do{
        cout<<x<<endl;
        x++;
    }while(x>=5);

    return 0;
}
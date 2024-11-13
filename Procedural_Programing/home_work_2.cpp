#include<iostream>
using namespace std;
int main(){

    int x[3] = {4,6,8};
    for(int i = 0; i < 3; i++){
        cout<<*(x+i)<<endl;
        cout<<&x[i]<<endl;
        cout<<x+i<<endl;
    }

    return 0;
}
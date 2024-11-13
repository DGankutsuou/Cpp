#include<iostream>
using namespace std;
int fun(int n){
    if(n == 1) // Base case
        return 1;
    else       // Recursive procedure 
        return 1 + fun(n - 1);
}
// fun(3) // 3
// 1 + fun(2) // 1 + 2
// 1 + fun(1) // 2
// 1 + 1

int main(){

    cout<<fun(3)<<endl;

    return 0;
}
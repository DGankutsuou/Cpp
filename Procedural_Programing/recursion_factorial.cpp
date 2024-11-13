#include<iostream>
using namespace std;

/* factorial(1) = 1
    factorial(2) = 2 * 1 = 2 * factorial(1)
    factorial(3) = 3 * 2 * 1 = 3 * factorial(2)
    factorial(n) = n * factorial(n - 1)
*/

int fact(int n){
    if(n==0 || n==1)
        return 1;
    else
        return n * fact(n - 1);
}
int main(){

    int n;
    cout<<"n = ";
    cin>>n;
    cout<<fact(n)<<endl;

    return 0;
}
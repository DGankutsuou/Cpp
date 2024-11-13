#include<iostream>
using namespace std;
double print(double a, double b){
    return a * b;
}
int print(int a, int b){
    return a + b;
}
int main(){

    double x = 12;
    double y = 5;
    int z = 11;
    int e = 4;
    
    cout<<print(x, y)<<endl; // OUTPUT: x * y
    cout<<print(z, e)<<endl; // OUTPUT: z + e
    cout<<print(5.5, 10.2)<<endl; // OUTPUT: 5.5 * 10.2 // you can't use float
    cout<<print(5, 10)<<endl; // OUTPUT: 5 + 10
    // you can't make int and double in one function.
    // last but not least don't make two functions with same name >_< 

    return 0;
}
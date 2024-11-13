#include<iostream>
using namespace std;
int main(){

    // increment: Z++
    // decrement: Z--
    // postfix: Z++
    // prefix: ++Z
    /* int Z = 5;
    int X = 4;
    int Y = 6;
    int W = 8;
    cout<<Z++<<endl; // 5
    cout<<Z<<endl; // 6
    cout<<++X<<endl; // 5
    cout<<X<<endl; // 5
    cout<<Y--<<endl; // 6
    cout<<Y<<endl; // 5
    cout<<--W<<endl; // 7
    cout<<W<<endl; // 7 */

    // Exercise:
    int X = 4, Y = 10;
    cout<<X + 3<<endl; // 7
    cout<<X<<endl; // 4
    cout<<Y++<<endl; // 10 // Y = 11
    cout<<++Y<<endl; // 12 // Y = 12
    cout<<++X<<endl; // 5
    cout<<X<<endl; // 5
    cout<<X++<<endl; // 5 // X = 6
    cout<<X+Y<<endl; // 6 + 12 = 18
    cout<<Y<<endl; // 12
    cout<<X<<endl; // 6

    // a+=b; a=a+b
    // a-=b; a=a-b
    // a*=b; a=a*b
    // a/=b; a=a/b
    // a%=b; a=a%b

    return 0;
}
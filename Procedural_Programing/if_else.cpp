#include<iostream>
using namespace std;
int main(){

    int x;
    cout<<"x = ";
    cin>>x;
/*
    if(x == 18){
        cout<<"you are able"<<endl;
    }
    else if(x>18){
        cout<<"you are very able"<<endl;
    }
    else{
        cout<<"you are not able"<<endl;
    }
*/
(x>=18)?cout<<"you are able\n":cout<<"you are not able"<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){

    int notes[3][4] = {11,3,43,5,7,6,9,8,3,9,7,5}; // first way
    int markes[3][4] = {
        {12,32,4,5},
        {34,23,5,7},
        {45,67,9,90}
    }; // second way
    cout<<notes[2][0]<<endl; // you can make it notes[0][8] -_-
    cout<<markes[1][3]<<endl; // it can be markes[0][7]
    // if you called markes[0][12] it will be notes[0][0] o_o
    for(int row = 0; row < 3; row++){
        for(int column = 0; column < 4; column++){
            cout<<markes[row][column]<<endl;
        }
    }

    return 0;
}
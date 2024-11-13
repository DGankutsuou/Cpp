#include<iostream> // to use c++.
#include<stdlib.h> // to use rand() and srand().
#include<ctime> // to use time().
using namespace std; // to use cout and cin.
int main(){

    srand(time(0)); // to change the randum numbers.
/*    
    for(int i = 0; i < 6; i++){ // how much of randum numbers you want?
        cout<<rand()%7<<endl; // modulus makes the randum numbers under it
    }
*/    
    // to make the randum numbers between two numbers:
    for(int i = 0; i < 10; i++){
        cout<<60 + rand()%(1000 - 60)<<endl; // randum numbers will be between 60 and 1000.
    }

    return 0;
}
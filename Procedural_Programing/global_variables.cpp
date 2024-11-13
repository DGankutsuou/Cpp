#include <iostream>
using namespace std;

// Global variables
int x = 100;
int y = 200;

void procedure1(){
    int x = 10; // Local variable
    ::y += 100;
    cout << "The local x in procedure: " << x <<endl;
    cout << "The global y: " << ::y << endl;
}

int main(){

    int x = 500;
    cout << "The local x in main function: " << x << endl;
    // We need :: because there is a local x
    cout << "The global x: " << ::x << endl;
    // We do not need :: if there is no local y
    cout << "The global y before calling the procedure: " << y << endl;
    procedure1();
    cout << "The global y after calling procedure: " << y << endl;   
    int y = 5;
    y++, ::y++;
    cout << "The local y: " << y << " And the global y: " << ::y << endl;

    return 0;
}
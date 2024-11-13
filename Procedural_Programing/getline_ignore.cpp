#include <iostream>
#include <string>
using namespace std;

int main(){

    int id;
    string fullName, country;
    cout << "Enter your ID: ";
    cin >> id;
    cout << "Enter your full name: ";
    cin.ignore(1, '\n');
    getline(cin, fullName);
    cout << "Enter your country: ";
    cin >> country;

    cout << "Your ID: " << id;
    cout << "\nYour full name: " << fullName;
    cout << "\nYour country: " << country << endl;

    return 0;
}
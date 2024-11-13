#include <iostream>
#include <string>
using namespace std;

int main(){

    string string1 ,string2, string3;
    cout << "Please enter string1: ";
    getline(cin, string1);
    cout << "\n";
    cout << "Please enter string2: ";
    cin >> string2;
    cout << "\n";
    cout << "Please enter string3: ";
    cin >> string3;
    cout << "\n************************\n";
    cout << string1 << "\n";
    cout << "The length of string1 is: " << string1.length() << "\n";
    cout << string1[0] << "\n";
    cout << string1[2] << "\n";
    cout << string1[4] << "\n";
    cout << string1[7] << "\n";

    cout << "The concatenating of string2 and string3 is: " << string2 + string3 << "\n";
    unsigned short result = stoi(string2) * stoi(string3);
    cout << string2 << " * " << string3 << " = " << result << endl;

    return 0;
}
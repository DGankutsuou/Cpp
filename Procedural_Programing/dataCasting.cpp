#include <iostream>
#include <string>
using namespace std;

int main(){

    string st1 = "43.22";
    cout<<st1<<"\n";
    double num1 = stod(st1);
    cout<<num1<<"\n";
    float num2 = stof(st1);
    cout<<num2<<"\n";
    int num3 = stoi(st1);
    cout<<num3<<"\n\n";

    int n1 = 20;
    string str1 = to_string(n1);
    cout<<n1<<"\n";
    cout << str1 << "\n\n";

    double n2 = 33.5;
    string str2 = to_string(n2);
    cout<<n2<<"\n";
    cout<<str2<<"\n\n";

    float n3 = 55.23;
    string str3 = to_string(n3);
    int nu1 = n3; // Implecit conversion.
    int nu2 = (int) n3; // Explicit conversion.
    int nu3 = int(n3); // Explicit coversion.
    cout<<n3<<"\n";
    cout<<str3<<"\n";
    cout<<nu1<<"\n";
    cout<<nu2<<"\n";
    cout<<nu3<<endl;

    return 0;
}
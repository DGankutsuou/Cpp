// structuresHomeWork1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Person{
    string name;
    unsigned short age;
    string city;
    string country;
    int monthlySalary;
    char gender;
    bool maried;
};

int main()
{
    Person person1;

    cout << "Please enter the folowing informations:\n\n";
    cout << "*************************************\n";
    cout << "Name: ";
    cin >> person1.name;
    cout << "Age: ";
    cin >> person1.age;
    cout << "City: ";
    cin >> person1.city;
    cout << "Country: ";
    cin >> person1.country;
    cout << "MonthlySalary: ";
    cin >> person1.monthlySalary;
    cout << "Gender: ";
    cin >> person1.gender;
    cout << "Maried: ";
    cin >> person1.maried;
    cout << "*************************************\n";

    cout << "*************************************\n";
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "City: " << person1.city << endl;
    cout << "Country: " << person1.country << endl;
    cout << "MonthlySalary: " << person1.monthlySalary << endl;
    cout << "YearlySalary: " << person1.monthlySalary * 12 << endl;
    cout << "Gender: " << person1.gender << endl;
    cout << "Maried: " << person1.maried << endl;
    cout << "*************************************\n";

    return 0;
}

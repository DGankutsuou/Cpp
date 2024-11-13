// structuresHomeWork1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Re-usability

#include <iostream>
#include <string>
using namespace std;

struct stPerson{
    string fullName;
    unsigned short age;
    string city;
    string country;
    int monthlySalary;
    char gender;
    bool maried;
};

void readInfo(stPerson &info){
    cout << "\nPlease enter the folowing informations:\n\n";
    cout << "*************************************\n";
    cout << "Full name: ";
    getline(cin, info.fullName);
    cout << "Age: ";
    cin >> info.age;
    cout << "City: ";
    cin >> info.city;
    cout << "Country: ";
    cin >> info.country;
    cout << "MonthlySalary: ";
    cin >> info.monthlySalary;
    cout << "Gender: ";
    cin >> info.gender;
    cout << "Maried: ";
    cin >> info.maried;
    cout << "*************************************\n";
}

void printInfo(stPerson info){
    cout << "*************************************\n";
    cout << "Full name: " << info.fullName << endl;
    cout << "Age: " << info.age << endl;
    cout << "City: " << info.city << endl;
    cout << "Country: " << info.country << endl;
    cout << "MonthlySalary: " << info.monthlySalary << endl;
    cout << "YearlySalary: " << info.monthlySalary * 12 << endl;
    cout << "Gender: " << info.gender << endl;
    cout << "Maried: " << info.maried << endl;
    cout << "*************************************\n";
}

int main()
{
    stPerson person1;
    readInfo(person1);
    printInfo(person1);

    return 0;
}

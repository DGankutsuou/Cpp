#include<iostream>
using namespace std;

enum enGender{female, male, other};
enum enMaritalStatu{single, maried, disorved};
enum enSckinColor{White, Brown, Black, another = 404};

struct stRegion {
    string country;
    string city;
    unsigned short postalCode;
};
struct stAdress {
    stRegion region;
    string street;
    string residence;
    string floor;
    unsigned short doorNumber;
};
struct stContact {
    string email;
    string phone;
    stAdress adress;
};
struct stFullName {
    string firstName;
    string lastName;
};
struct stSalary {
    int monthlySalary;
    int yearlySalary;
};
struct stPerson {
    stFullName fullNume;
    unsigned short age;
    stContact countact;
    stSalary salary;
    enGender gender;
    enMaritalStatu maritalstatu;
    enSckinColor sckinColor;
};

int main() {

    stPerson person1;

    person1.gender = enGender::male;
    person1.maritalstatu = enMaritalStatu::single;
    person1.sckinColor = enSckinColor::another;
    
    cout << "Enter your informations:\n\n";
    cout << "Enter your first name: ";
    cin >> person1.fullNume.firstName;
    cout << "Enter your last name: ";
    cin >> person1.fullNume.lastName;
    cout << "Enter your age: ";
    cin >> person1.age;
    cout << "Enter your monthly salary: ";
    cin >> person1.salary.monthlySalary;
    cout << "Enter your email: ";
    cin >> person1.countact.email;
    cout << "Enter your phone: ";
    cin >> person1.countact.phone;
    cout << "Enter your country: ";
    cin >> person1.countact.adress.region.country;
    cout << "Enter your city: ";
    cin >> person1.countact.adress.region.city;
    cout << "Enter your postal code: ";
    cin >> person1.countact.adress.region.postalCode;
    cout << "Enter your street: ";
    cin >> person1.countact.adress.street;
    cout << "Enter your residence: ";
    cin >> person1.countact.adress.residence;
    cout << "Enter your floor: ";
    cin >> person1.countact.adress.floor;
    cout << "Enter your door number: ";
    cin >> person1.countact.adress.doorNumber;

    cout << "\nYour first name: " << person1.fullNume.firstName << "\n";
    cout << "Your last name: " << person1.fullNume.lastName << "\n";
    cout << "Your age: " << person1.age << "\n";
    cout << "Your monthly salary: " << person1.salary.monthlySalary << "\n";
    person1.salary.yearlySalary = person1.salary.monthlySalary * 12;
    cout << "Your yearly salary: " << person1.salary.yearlySalary << "\n";
    cout << "Your email: " << person1.countact.email << "\n";
    cout << "Your phone: " << person1.countact.phone << endl;
    cout << "Your country: " << person1.countact.adress.region.country << "\n";
    cout << "Your city: " << person1.countact.adress.region.city << "\n";
    cout << "Your postal code: " << person1.countact.adress.region.postalCode << "\n";
    cout << "Your street: " << person1.countact.adress.street << "\n";
    cout << "Your residence: " << person1.countact.adress.residence << "\n";
    cout << "Your floor: " << person1.countact.adress.floor << "\n";
    cout << "Your door number: " << person1.countact.adress.doorNumber << endl;
    cout << "Your gender: " << person1.gender << "\n";
    cout << "Your marital statu: " << person1.maritalstatu << "\n";
    cout << "Yor sckin color: " << person1.sckinColor << endl;
  
    return 0;
}
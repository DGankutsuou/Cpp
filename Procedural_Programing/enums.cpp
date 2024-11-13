#include <iostream>
using namespace std;

enum enName{Ayman, Hicham, Salah, Bilal, Ayoub, Yassine}; // Ayman = 0, Yassin = 5
enum enCity{Settat = 26000, Khribga, Tanger}; // Khribga = 26001
enum enCountry{Morocco, America, England};
enum enGender{female, male, other};
enum enStatu{single, maried, disorved};
enum enSckinColor{White, Brown, Black, another = 404};

int main()
{

    unsigned short age;
    int monthlySalary;
    enName name;
    enCity city;
    enCountry country;
    enGender gender;
    enStatu statu;
    enSckinColor sckinColor;

    name = enName::Ayman;
    city = enCity::Settat;
    country = enCountry::Morocco;
    gender = enGender::male;
    statu = enStatu::single;
    sckinColor = enSckinColor::another;
    
    cout << "Please enter the folowing informations:\n\n";
    cout << "*************************************\n";
    cout << "Age: ";
    cin >> age;
    cout << "MonthlySalary: ";
    cin >> monthlySalary;
    cout << "*************************************\n";

    cout << "*************************************\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "MonthlySalary: " << monthlySalary << endl;
    cout << "YearlySalary: " << monthlySalary * 12 << endl;
    cout << "Gender: " << gender << endl;
    cout << "Statu: " << statu << endl;
    cout << "Sckin color: " << sckinColor << endl;
    cout << "*************************************\n";

    return 0;
}
#include <iostream>
using namespace std;

// Procedure is a void function which return nothing.
void print_informations_card(){
    cout << "**************************\n";
    cout << "Name: "<<"Ayman Abourizq\n";
    cout << "Age: " << "18\n";
    cout << "city: " << "Settat\n";
    cout << "Country: " << "Morocco\n";
    cout << "**************************\n" << endl;
}
void print_stars(){
    cout << "********\n";
    cout << "********\n";
    cout << "********\n";
    cout << "********\n" << endl;
}
void print_promise(){
    cout << "I love programing!\n\n";
    cout << "I promise to be the best developer ever!\n\n";
    cout << "I know it will take some time to practice, but I will achieve my goal.\n\n";
    cout << "Best Regards.\n";
    cout << "Ayman Abourizq.\n" << endl;
}
void print_H(){
    cout << "*   *\n";
    cout << "*   *\n";
    cout << "*****\n";
    cout << "*   *\n";
    cout << "*   *\n" << endl;
}

int main(){

    print_informations_card();
    print_stars();
    print_promise();
    print_H();

    return 0;
}
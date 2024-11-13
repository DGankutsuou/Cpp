#include<iostream>
using namespace std;
int main(){

    // data_type arrays's_name[size] = {value1, value2, etc}; 

    int notes[4] = {12,20,9};
    cout<<notes[0]<<endl; // the index of 12 is 0. in arrays we start with 0;
    cout<<notes[3]<<endl;
    int markes[4];
    cout<<"markes[2] = ";
    cin>>markes[2];
    cout<<markes[2]<<endl; 
    int whatever[] = {12,34,5,6,76,9}; // you can enter eny number of vlues.
    string names[4] = {"ayman", "Adam"};
    cout<<names[2];
    cout<<sizeof (notes) / sizeof (notes[0])<<endl; // this will give you the size of any data_type.
    // or
    cout<<sizeof (notes) / sizeof (int)<<endl;

    return 0;
}
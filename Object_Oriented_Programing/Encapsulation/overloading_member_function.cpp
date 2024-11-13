#include<iostream>
using namespace std;
class School{
    private:
        string name;
        int level;
    public:
        string set(string n);
        int set(int l);
};
int main(){

    School ob1;
    cout<<ob1.set("Ayman")<<endl;
    cout<<ob1.set(100)<<endl;

    return 0;
}
string School::set(string n){
    name = n;
    return name;
}
int School::set(int l){
    level = l;
    return level;
}
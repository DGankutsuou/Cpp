#include<iostream>
using namespace std;
class School{
    private:
        string name;
        int mark;
    public:
        School(string n, int m);
        int sum(School o1, School o2);
};
School::School(string n, int m){
            name = n;
            mark = m;
        }
int School::sum(School o1, School o2){
            return o1.mark + o2.mark;
        }
int main(){

    School ob1("Ayman", 100);
    School ob2("Anass", 70);
    cout<<ob1.sum(ob1, ob2)<<endl;

    return 0;
}
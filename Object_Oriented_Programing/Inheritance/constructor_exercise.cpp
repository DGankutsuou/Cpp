#include<iostream>
using namespace std;
class Cal{
    private:
        int n1;
        int n2;
    public:
        Cal(){ // default constructor
            cout<<"n1 = ";
            cin>>n1;
            cout<<"n2 = ";
            cin>>n2;
        }
        Cal(int x, int y){ // parameterized constructor
            n1 = x;
            n2 = y;
        }
        int sum(){
            return n1 + n2;
        }
        float divide1(){ // My way
            float x = n1;
            float y = n2;
            return x / y;
        }
        float divide2(){ 
            return (float)n1 / n2; // typeCast
        }
        int mod(){
            return n1 % n2;
        }
        int mult(){
            return n1 * n2;
        }
};
int main(){

    Cal ob1;
        cout<<"n1 + n2 = "<<ob1.sum()<<endl;
        cout<<"n1 / n2 = "<<ob1.divide1()<<endl;
        cout<<"n1 / n2 = "<<ob1.divide2()<<endl;
        cout<<"n1 % n2 = "<<ob1.mod()<<endl;
        cout<<"n1 * n2 = "<<ob1.mult()<<endl;

    return 0;
}
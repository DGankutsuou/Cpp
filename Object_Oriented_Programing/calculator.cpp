#include<iostream>
using namespace std;
class Cal{
    private:
        double n1;
        double n2;
        string op;
    public:
        Cal(){
            cout<<"Chose an operator (+, -, *, /):";
            cin>>op;
            if((op == "+") || (op == "-") || (op == "*") || (op == "/")){
            cout<<"n1 = ";
            cin>>n1;
            cout<<"n2 = ";
            cin>>n2;
            if(op == "+"){
                cout<<n1<<" + "<<n2<<" = "<<n1 + n2<<endl;
            }
            if(op == "-"){
                cout<<n1<<" - "<<n2<<" = "<<n1 - n2<<endl;
            }
            if(op == "*"){
                cout<<n1<<" * "<<n2<<" = "<<n1 * n2<<endl;
            }
            if(op == "/"){
                cout<<n1<<" / "<<n2<<" = "<<n1 / n2<<endl;
            }
            }else{
                while((op != "+") && (op != "-") && (op != "*") && (op != "/")){
                    cout<<"You can chose only + or - or * or /"<<endl;
                    cout<<"Chose an operator (+, -, *, /):";
            cin>>op;
            if((op == "+") || (op == "-") || (op == "*") || (op == "/")){
            cout<<"n1 = ";
            cin>>n1;
            cout<<"n2 = ";
            cin>>n2;
            if(op == "+"){
                cout<<n1<<" + "<<n2<<" = "<<n1 + n2<<endl;
            }
            if(op == "-"){
                cout<<n1<<" - "<<n2<<" = "<<n1 - n2<<endl;
            }
            if(op == "*"){
                cout<<n1<<" * "<<n2<<" = "<<n1 * n2<<endl;
            }
            if(op == "/"){
                cout<<n1<<" / "<<n2<<" = "<<n1 / n2<<endl;
            }
            }
                }
            }
        }
};
int main(){

    Cal op1;

    return 0;
}
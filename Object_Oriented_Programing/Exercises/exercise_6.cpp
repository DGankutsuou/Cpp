#include<iostream>
using namespace std;
const int N = 5;
class Student{
    private:
        int mark;
    public:
        Student(){
            cout<<"GIVE ME YOUR INFORMATIONS PLEASE"<<endl;
            cout<<"Your mark: ";
            cin>>mark;
        }
        friend float average(Student ob[N]);
};
float average(Student ob[N]){
    int sum = 0;
    for(int i = 0; i < N; i++){
        sum += ob[i].mark;
    }
    return (float)sum / N;
}
int main(){

    Student ob[N];
    cout<<"The average of all students is: "<<average(ob)<<endl;

    return 0;
}
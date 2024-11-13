#include<iostream>
using namespace std;
class Stu{
    private:
        int mark;
    public:
        Stu(int m){
            mark = m;
        }
        void print(){
            cout<<"Your mark is "<<mark<<endl;
        }
        friend void show(Stu ob);
};
void show(Stu ob){
    cout<<"The mark is "<<ob.mark<<endl;
}
int main(){

    Stu ob1(100);
    ob1.print();
    show(ob1);

    return 0;
}
#include<iostream>
using namespace std;
class Yt{
    private:
        string name;
        int subscribers;
        int videos;

    public:
        void add(string n, int s, int v);
        void print();
};
void Yt::add(string n, int s, int v){
    name = n;
    subscribers = s;
    videos = v;
}
void Yt::print(){
    cout<<"Channel name is "<<name;
    cout<<" and subscribers are "<<subscribers;
    cout<<" as videos are "<<videos<<endl;
}
int main(){

    Yt ob1;
    ob1.add("RILTIM",89800,314);
    ob1.print();

    return 0;
}
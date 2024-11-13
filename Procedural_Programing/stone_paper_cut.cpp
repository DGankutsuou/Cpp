#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main(){

    int w = 0;
    int l = 0;
    while(w < 3 && l < 3){

        srand(time(0));
        int spc = 1 + rand()%3;
        string SPC;
        int gess;
        cout<<"1: stone\n"<<"2: paper\n"<<"3: cut"<<endl;
        cout<<"Choose: ";
        cin>>gess;
        cout<<"***********************"<<endl;

        if(gess == spc){
            cout<<"Draw, try again"<<endl;
            cout<<"Your result: "<<w<<endl;
            cout<<"Computer result: "<<l<<endl;
            cout<<"***********************"<<endl;
        }else if((gess == 1 && spc == 2)||(gess == 2 && spc == 3)||(gess == 3 && spc == 1)){
            cout<<"You choose "<<gess<<" "<<"and the comuter choose "<<spc<<endl;
            cout<<"You loose in this round"<<endl;
            l++;
            cout<<"Your result: "<<w<<endl;
            cout<<"Computer result: "<<l<<endl;
            cout<<"***********************"<<endl;
        }else if(gess > 3 || gess == 0){
            cout<<"You can only choose 1 or 2 or 3"<<endl;
            cout<<"***********************"<<endl;
        }
        else{
            cout<<"You choose "<<gess<<" "<<"and the comuter choose "<<spc<<endl;
            cout<<"You won in this round"<<endl;
            w++;
            cout<<"Your result: "<<w<<endl;
            cout<<"Computer result: "<<l<<endl;
            cout<<"***********************"<<endl;
        }
    }
    
    if(w == 3){
        cout<<"You won the game"<<endl;
        cout<<"Your result: "<<w<<endl;
        cout<<"Computer result: "<<l<<endl;
    }else if(l == 3){
        cout<<"You loose the game"<<endl;
        cout<<"Your result: "<<w<<endl;
        cout<<"Computer result: "<<l<<endl;
    }else{
        cout<<"Error"<<endl;
    }

    
    

    return 0;
}
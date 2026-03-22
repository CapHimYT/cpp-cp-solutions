#include<iostream>
using namespace std;
int main(){
    char ch;
    ch = cin.get();
    int x=0, y=0;
    while(ch !='\n'){
        if(ch=='N' || ch=='n'){
            y++;
        }
        if(ch=='E' || ch=='e'){
            x++;
        }
        else if(ch=='W' || ch=='w'){
            x--;
        }
        else if(ch=='S' || ch=='s'){
            y--;
        }
        ch=cin.get();

    }
    if(x>=0){
        for(int i=0;i<x;i++){
            cout<<"E";
        }
        
    }
    if(y<=0){
        for(int i=0;i<abs(y);i++){
            cout<<"S";
        }
        
    }
    if(y>=0){
        for(int i=0;i<y;i++){
            cout<<"N";
        }
        
    }
    if(x<=0){
        for(int i=0;i<abs(x);i++){
            cout<<"W";
        }
        
    }
    
    
    
    cout<<endl;
return 0;
}


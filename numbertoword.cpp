#include<iostream>
using namespace std;
void word(int n, int a){
    word(n/10,a-1);
    
    if(a==0){
        return;
    }
    switch(n){
        case 1:
        cout<<"one";
        case 2:
        cout<<"two";
        case 3:
        cout<<"three";
        case 4:
        cout<<"four";
        case 5:
        cout<<"five";
        case 6:
        cout<<"six";
        case 7:
        cout<<"seven";
        case 8:
        cout<<"eight";
        case 9:
        cout<<"nine";
        case 0:
        cout<<"zero";
    }


}


int main(){
    int n;
    int a=sizeof(n)/sizeof(int);
    cin>>n;
    word(n,a);

}
#include<iostream>
using namespace std;
void printinc(int n){
    if(n>1){
        printinc(n-1);
        cout<<n;
    }
    if(n==1){
        cout<<1;
        return;
        
        
    }
}
void printdec(int n){
    if(n==0){
        cout<<endl;
        return;
    }
    cout<<n;
    printdec(n-1);
    
}
int main(){
    int n;
    cin>>n;
    
    printinc(n);
    cout<<endl;
    printdec(n);
    

}
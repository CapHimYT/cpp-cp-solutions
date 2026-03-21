#include<iostream>
using namespace std;

void indexsevenall(int* a,int n, int i){
    
    if(a[i]==7){
        cout<<"index"<<i<<endl;


    }
    if(i==n){
        return;
    }
    indexsevenall(a,n,i+1);

    
    
}
int main(){
    int n=0;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0;
    
    indexsevenall(a,n,i);
}
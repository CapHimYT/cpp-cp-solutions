#include<iostream>
using namespace std;

int indexseven(int* a,int n){
    
    if(a[n-1]==7){
        return n-1;


    }
    if(n==0){
        return -1;
    }
    return indexseven(a,n-1);

    
    
}
int main(){
    int n=0;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int index=0;
    
    cout<<indexseven(a,n);
}
#include<iostream>
using namespace std;

int indexseven(int* a,int n){
    int index=0;
    if(a[0]==7){
        return 0;


    }
    if(n==0){
        return -1;
    }

    int ans=indexseven(a+1,n-1);
    if(ans!=-1){
        return ans+1;
    }
    else{
        return -1;
    }
    
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
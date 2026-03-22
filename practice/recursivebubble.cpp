#include<iostream>
using namespace std;
void sort(int* a, int n,int i,int j){
    if(i==n-1){
        return;
    }
    if(j<n-i-1){
        if(a[j]<a[j+1]){
            swap(a[j],a[j+1]);
        }
        sort(a,n,i,j+1);
    }
    else{
        sort(a,n,i+1,0);
    }

}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0,j=0;
    sort(a,n,i,j);

}
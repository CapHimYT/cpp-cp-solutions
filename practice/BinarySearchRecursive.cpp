#include<iostream>
using namespace std;
int BinSearch(int* a,int s, int e, int k){
    if(s>e){
        return -1;
    }
    int mid=(s+e)/2;
    if(k==a[mid]){
        return mid;
    }
    if(k>a[mid]){
        return BinSearch(a,mid+1,e,k);
    }
      if(k<a[mid]){
        return BinSearch(a,s,mid-1,k);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    cout<<BinSearch(a,0,n-1,k);
    return 0;
}
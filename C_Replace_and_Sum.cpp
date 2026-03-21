#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int q;
        cin>>q;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
       int b[n];
       for(int i=0;i<n;i++){
           cin>>b[i];
       }
       for(int i=0;i<q;i++){
           int l,r;
           cin>>l>>r;
           int sum=0;
           int c[n];
           int max = a[l];
           int maxindex = l;
           for(int j=0;j<n;j++){
               if(a[j]>max){
                   max = a[j];
                   maxindex = j;
               }
           }
           if(maxindex==0 && 1<=r){
               max = a[1];
               for(int j=1;j<n;j++){
                   if(a[j]>max){
                       max = a[j];
                       maxindex = j;
                   }
               }
           }
           for(int j=0;j<n;j++){
               c[j]=a[j];
           }
           for(int j=0;j<maxindex+1;j++){
               c[j]=max;
           }
           
           for(int j=0;j<n;j++){
            if(c[j]<b[j]){
                c[j]=b[j];
            }
           }
           
           for(int j=l;j<r+1;j++){
               sum+=c[j];
           }
           cout<<sum<<" ";
       }
    }
    cout<<endl;
    return 0;
}
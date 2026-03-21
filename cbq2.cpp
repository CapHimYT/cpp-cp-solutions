#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int x=1;
for (int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==0){
            cout<<x;
        }
        if(j==0 ||j==i){
            cout<<i;
        }
        else{cout<<0;}
    }
}
return 0;
}
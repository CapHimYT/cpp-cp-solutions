#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<(((n+1)/2)+1);i++){
        for (int b=0;b<(((n+1)/2)-i+1);b++){
            cout<<" ";

        }
        int r =2*i-1;
        
        for (int a=i;a<r+1;a++){
            cout<<a;
            
        }
        for (int a=r;a>i;a--){
            cout<<a-1;
            
        }
        
        
        cout<<endl;
    }
    
    
}
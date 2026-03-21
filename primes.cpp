#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    bool isprime = true;
    for (int i=2;i<n;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    return isprime;
}
int main(){
    int x;
    cin>>x;
    for(int i=2;i<=x;i++){
        bool a = prime(i);
        if(a==true){
            cout<<i<<endl;
        }
        
    }
    
    return 0;

}
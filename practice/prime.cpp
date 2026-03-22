#include<bits/stdc++.h>
using namespace std;
string prime(int n){
    string isprime = "Prime number";
    for (int i=2;i<n;i++){
        if(n%i==0){
            isprime="Not prime";
        }
    }
    return isprime;
}
int main(){
    int x;
    cin>>x;
    string a = prime(x);
    cout<<a<<endl;
    return 0;

}


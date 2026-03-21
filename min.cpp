#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int i=INT_MAX;
    
    while(n>0){
        int a;
        cout<<"Enter Number "<<n<<":";
        cin>>a;

        if (a<i){
            i=a;
        }

        
        n--;


    }
    cout<<i<<endl;

    
}
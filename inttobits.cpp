#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        if((n&(1<<i))!=0){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
        

}
cout<<endl;
return 0;
}

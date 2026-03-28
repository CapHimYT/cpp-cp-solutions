#include<iostream>
using namespace std;


int main(){
    string a;
    cin>>a;
    sort(a.begin(), a.end());
    int currmax=0;
    int curr=0;
    char max;
    int n=a.size();
    for(int i=0;i<n;i++){
        if(i+1<n||a[i]==a[i+1]){
            curr++;
        }
        if(i+1<n||a[i]!=a[i+1]){
            if(curr>=currmax){
                currmax=curr;
                curr=0;
                max=a[i];
            }
        }
    }
    cout<<max;

    
}

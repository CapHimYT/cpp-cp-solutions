#include<iostream>
using namespace std;
int count=0;
bool check(int* a,int n){
    if(n==0){
        return false;
    }

    if(a[0]==7){
        return true;

    }
    return check(a+1,n-1);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<check(a, n);
    return 0;

}
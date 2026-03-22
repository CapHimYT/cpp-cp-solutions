#include<iostream>
using namespace std;
bool check(int* a, int n){
    if(n==1||n==0){
        return true;
    }
    if(n>1){
        if(a[0]<=a[1]){
            check(a+1, n-1);

        }
        return false;
    }
}
int main(){

    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<check(&a[1], n);

}
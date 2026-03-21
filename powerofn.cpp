#include<iostream>
using namespace std;
int pow(int n, int a){
    if(a==0){
        return 1;
    
    }
    if(a==1){
        return n;
    }
    return n*pow(n,a-1);
}
int main(){
    int a,n;
    cin>>n>>a;
    cout<<pow(n,a);

}
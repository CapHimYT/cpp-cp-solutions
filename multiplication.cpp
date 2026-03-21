#include<iostream>
using namespace std;
int multiply(int n, int a){
    if(a==0){
        return 0;
    }
    return multiply(n,a-1)+n;
}
int main(){
    int n,a;
    cin>>n>>a;

    cout<<multiply(n,a);

}
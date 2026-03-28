#include<iostream>
using namespace std;
int main(){
    string a;
    int i=0;
    cin>>a;
    while(a[i]!='\0'){
        a[i]= a[i]^32;
        i++;
    }
    cout<<a;
    return 0;
}
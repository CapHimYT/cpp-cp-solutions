#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    int i=0;
    while(a[i]!='\0'){
        if(a[i]%2==0){
            a[i]--;
        }
        else{
            a[i]++;
        }
        i++;
    }
    cout<<a;

    return 0;
}
#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    string b="";
    int i=0;
    char current=a[0];
    char next=a[1];
    while(a[i+1]!='\0'){
        i++;
        b=b+current+to_string(next-current);
        current=a[i];
        next=a[i+1];
        
    }
    b=b+a[i];
    cout<<b;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    int n;
    n=sizeof(a)/sizeof(char);
    char current = a[0];
    char next=a[1];
    int count=0;
    string b="";
    int i=0;
    while(a[i]!='\0'){
        if(current==next){
            count++;

        }
        if(current!=next){
            b=b+current+to_string(count+1);
            count=0;
        }
        current=next;
        next=a[i+2];
        i++;
    }
    cout<<b;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    int count=0;
    while(cin){
        cin>>ch;
        count++;
        if(ch=='$'){
            break;
        }
    }
    cout<<count-1<<endl;

return 0;
}

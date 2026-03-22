#include<bits/stdc++.h>
using namespace std;
void sub(char* ip, int i, char* op, int j){
    if (*(ip+i)=='\0'){
        *(op+j)='\0';
        cout<<op<<endl;
        return;
    }
    sub(ip, i+1,op,j);
    *(op+j)=*(ip+i);
    sub(ip,i+1,op,j+1);
    
     

}

int main(){
    int n;
    cin>>n;
    char ip[n+1];

    for(int i=0;i<n;i++){
        cin>>ip[i];

    }
    
    char op[n+1];
    ip[n]='\0';
    op[n]='\0';
    sub(ip, 0, op, 0);

    cout<<"end"<<endl;
    return 0;
}
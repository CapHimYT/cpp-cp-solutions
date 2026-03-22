#include<bits/stdc++.h>
using namespace std;
void perm(char* a, int i){
    if(a[i]=='\0'){
        cout<<a<<endl;
        return;
    }
    for(int j=i;a[j]!='\0';j++){
        swap(a[j],a[i]);
        perm(a,i+1);
        swap(a[j],a[i]);

    }
    

    
}
int main(){
    int n;
    cin>>n;
    char a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    a[n]='\0';
    perm(a,0);
    return 0;
}
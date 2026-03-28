#include<iostream>
using namespace std;
bool isPali(char*a, int s,int e){
    if(e-s==0||e-s==1){
        return true;
    }
    else if(a+s == a+e){
        return isPali(a,s+1,e-1);
    }
    return false;
}

int main(){
    string a;
    cin>>a;
    if(isPali(&a[0],0,a.size()-1)){
        cout<<true;
    }
    else{
        cout<<false;
    }
    
}

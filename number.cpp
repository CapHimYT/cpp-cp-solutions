#include<iostream>
using namespace std;
char a[][10]={
    "zero","one","two","three","four","five","six","seven","eight","nine"
};
void word(int n){
    if(n==0){
        return;
    }
    word(n/10);
    int last_digit=n%10;
    cout<<a[last_digit]<<" ";
    
    


}


int main(){
    int n;
    
    cin>>n;
    word(n);

}
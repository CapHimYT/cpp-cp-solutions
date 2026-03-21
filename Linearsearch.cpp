#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        if(a[i]==key){
            cout<<"Element found at index: "<<i<<endl;
            return 0;
        }
        else if(a[i]>key){
            cout<<"Element not found in the array"<<endl;
            return 0;
        }
    }
}
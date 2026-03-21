#include<iostream>
using namespace std;
void MergeSort(int* a, int n){
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n;i++){
        cin>>a[i];
    }
    MergeSort(a, n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
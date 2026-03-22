#include<iostream>
using namespace std;
int maze(int n, int m){
    if(n==0&&m==0){
        return 1;
    }
    if(n<0||m<0){
        return 0;

    }
    int sum=0;
    for(int i =0;i<n;i++){
        sum+=maze(i,m);
    }
    for(int i =0;i<m;i++){
        sum+=maze(n,i);
    }
    return sum;


}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<maze(n,m)<<endl;



    return 0;

}
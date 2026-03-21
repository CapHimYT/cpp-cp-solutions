#include<iostream>
using namespace std;
int maze(int n, int m){
    if(n==0&&m==0){
        return 1;
    }
    if(n<0||m<0){
        return 0;
    }
    return maze(n-1,m)+maze(n,m-1);



}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<maze(n,m)<<endl;



    return 0;

}
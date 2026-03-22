#include<iostream>
using namespace std;
void spiralprint(int a[][100], int n, int m){
    int sr=0, sc=0, er=n-1, ec=m-1;
    for (int col=sc;col<=ec;col++){
        cout<<a[sr][col]<<" ";

    }
    sr++;
    for(int row=sr;row<=er;row++){
        cout<<a[row][ec]<<" ";
    }
    er--;
    for (int col=ec;col>=sc;col--){
        cout<<a[er][col]<<" ";

    }
    er--;
    for(int row=er;row>=sr;row--){
        cout<<a[row][sc]<<" ";
    }
    sc++;
    
    cout<<endl;

}   
void print2D(int a[][100],int n,int m){
    for (int i=0;i<n;i++){

        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    int a[100][100];
    int num=1;
    for (int i=0;i<n;i++){

        for(int j=0;j<m;j++){
            a[i][j]=num;
            num++;

        }
    }
    print2D(a,n,m);
    spiralprint(a, n, m);
    return 0;
}
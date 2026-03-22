#include<iostream>
using namespace std;
void print2D(int a[][100],int n,int m){
    for (int i=0;i<n;i++){

        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }
}
void search2D(int a[][100], int n, int m, int key){
    //start from top right or bottom left
    int i=0, j=m-1;
    while(i<n && j>=0){
        
        if(a[i][j]==key){
            cout<<"Key found at "<< i<<","<<j<<" ";
            return;

        }
        else if(a[i][j]>key){
            j--;
        }
        else{i++;}
    }

}
int main(){
    int n,m;
    cin>>n>>m;
    int a[100][100];
    int num=1;
    //form the 2d array
    for (int i=0;i<n;i++){

        for(int j=0;j<m;j++){
            a[i][j]=num;
            num++;

        }
    }
    //print 2d array for reference
    print2D(a,n,m);
    int key;
    cin >> key;
    search2D(a,n,m,key);

    return 0;
}
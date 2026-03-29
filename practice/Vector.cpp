#include<iostream>
#include<vector>
using namespace std;
class Vector{
    int *a;
    int n;
    int cs;
public:
    Vector(int N=2){
        a= new int[N];
        n=N;
        cs=0;
    }
    void push_back(int d){

    }
    
    void pop_back(){

    }
    int capacity(){
        return n;
    }
    int size(){
        return cs;
    }
    bool empty(){
        return cs==0;
    }
    int operator[](int i){
        return a[i];
    }
};

int main(){
    int n;
    cin>>n;

}
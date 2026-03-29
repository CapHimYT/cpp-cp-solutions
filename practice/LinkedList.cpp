#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d){
        data=d;
        next=NULL;
    }
};
    
void insertAtFront(node* &head, node* &tail, int data){
    node* n= new node(data);
    if(head==NULL){
        head=tail=n;

    }
    else{
        (*n).next=head;
        head=n;
    }
}
void print(node* head){
    while(head!=NULL){
        cout<<(*head).data<<"-->";
        head=(*head).next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node*head=NULL, *tail=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        insertAtFront(head,tail,i);
    }
    print(head);
    

    

    
    return 0;
}
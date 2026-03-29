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
void insertAtEnd(node* &head, node* &tail, int data){
    node* n= new node(data);
    if(head==NULL){
        head=tail=n;

    }
    else{
        (*n).next=NULL;
        (*tail).next=n;
        tail=n;
    }
}


//*(head).next == head->next

//deref(pointer).param == pointer-> param

void print(node* head){
    while(head!=NULL){
        cout<<(*head).data<<"-->";
        head=(*head).next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    node*head=NULL, *tail=NULL;
    node*head2=NULL, *tail2=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        insertAtFront(head,tail,i);
    }
    for(int i=0;i<n;i++){
        insertAtEnd(head2,tail2,i);
    }
    print(head);
    print(head2);
    return 0;
}
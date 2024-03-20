#include<iostream>
using namespace std;

struct Node{
    Node* prev=NULL;
    int data;
    Node* next=NULL;
};

Node* head=NULL;
Node* last=NULL;
void create(int data){
    Node* t=new Node();
    t->data=data;
    if(head==NULL){
        head=t;
        last=t;
    }
    // N-1<->2
    else{
        Node* p=head;
        while(p->next){
            p=p->next;
        }
        p->next=t;
        t->prev=p;
        last=t;

    }
}

void print(){
    Node* p=head;
    while(p){
        cout<<p->data<<"->";
        p=p->next;
    }
}

void print1(){
    Node* p=last;
    while(p){
        cout<<p->data<<"<-";
        p=p->prev;
    }
}

void reverse(Node* p){
    Node* temp;
    while(p){
        temp=p->prev;
        p->prev=p->next;
        p->next=temp;
        if(p->prev==NULL){
            head=p;
        }
        p=p->prev; 
    }    
}

int main(){
    int n;
    cin>>n;
    int e;
    for(int i=0;i<n;i++){
        cin>>e;
        create(e);
    }
    //insert(5,6);
    print();
    cout<<endl;
    //print1();
    reverse(head);
    print();
    return 0;
}
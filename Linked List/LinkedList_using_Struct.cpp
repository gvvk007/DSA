#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head=NULL;

void create(int data){
    Node* A = new Node();
    if(head==NULL){
        head=A;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=A;
    A->data=data;
    A->next=NULL;
    
}

int length(){
    Node* temp=head;
    int l=0;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}

void insert(int pos,int data){
    if(pos<0 || pos>length()){
        cout<<"Invalid Position";
        return;
    }
    Node* temp=new Node();
    temp->data=data;
    if(pos==0){
        temp->next=head;
        head=temp;
        return;
    }
    Node* p=new Node();
    p=head;
    //cout<<p->data<<"\n";
    for(int i=1;i<pos-1;i++){
        p=p->next;
    }
    //cout<<(p->next)->data<<"\n";
    temp->next=p->next;
    p->next=temp;
}

void print(){
    Node* temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data;
}

// Recursive Function
void print1(Node* t){
    if(t==NULL)
        return;
    cout<<t->data<<' ';
    print1(t->next);
}
// Recursive Function
void reverse1(Node* q,Node* p){
    if(p==NULL){
        head=q;
        return;
    }
    reverse1(p,p->next);
    p->next=q;

}

/*
         p c  n
N<-1<-2<-3 4->5->N

*/
void reverse(Node* h){
    Node* p=NULL;
    Node* c=h;
    Node* n=h->next;
    while(1){
        c->next=p;
        if(n==NULL){
            head=c;
            break;
        }
        p=c;
        c=n;
        n=n->next;
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
    reverse(head);
    //reverse1(NULL,head);
    print();
    
    return 0;
}
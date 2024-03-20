#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    //Node(int d):data(d){};
    Node(int d){
        data=d;
    }

};

class List{
    public:
    Node* head;
    Node* tail;

    List(){
        head=NULL;
        tail=NULL;
    }

    void push_back(int data){
        Node* A = new Node(data);
        if(head==NULL){
            head=A;
            tail=A;
        }
        else{
            tail->next=A;
            tail=A;
        }
    }

    void insert(int data)
    {
        Node* A = new Node(data);
        if(head==NULL){
            head=A;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=A;
        A->next=NULL;
    }

    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }


};

int main(){
    List l1,l2; 
    l1.push_back(3);
    l1.push_back(4);
    l1.push_back(7);
    l1.print();
    cout<<endl;
    l2.push_back(1);
    l2.push_back(2);
    l2.push_back(5);
    l2.push_back(6);
    l2.print();

    Node* h1=l1.head;
    Node* h2=l2.head;

    Node* head=NULL;
    Node* temp=NULL;
    
    if(h1->data <= h2->data){
        head=h1;
        temp=head;
        h1=h1->next;
    }
    else{
        head=h2;
        temp=head;
        h2=h2->next;
    }

    while(h1!=NULL && h2!=NULL){
        if(h1->data <= h2->data){
            temp->next=h1;
            temp=temp->next;
            h1=h1->next;
        }
        else{
            temp->next=h2;
            temp=temp->next;
            h2=h2->next;   
        }
    }
    if(h1!=NULL){
        temp->next=h1;
    }
    if(h2!=NULL){
        temp->next=h2;
    }


    cout<<endl;
    while(head!=NULL){
        cout<<head->data<<' ';
        head=head->next;
    }
    return 0;
}
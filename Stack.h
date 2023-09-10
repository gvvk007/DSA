#include<iostream>
using namespace std;

template<typename T>
class Node{
    public:
    T data;
    Node<T>* next;
    Node(T d){
        data=d;
    }
};

template<typename T>
class Stack{
    public:
    Node<T>* head;
    Stack(){
        head=NULL;
    }

    bool empty(){
        return head==NULL;
    }

    void push(T data){
        Node<T>* n=new Node<T>(data);
        n->next=head;
        head=n;
    }

    void pop(){
        if(!empty()){
            Node<T>* temp=head;
            head=head->next;
            delete temp;
        }
    }

    T top(){
        return head->data;
    }

};

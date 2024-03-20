/*
STACK
Methods:
    push(data)
    pop()
    top()
    empty()
*/

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

    bool isEmpty(){
        return head==NULL;
    }

    void push(T data){
        Node<T>* n=new Node<T>(data);
        n->next=head;
        head=n;
    }

    void pop(){
        Node<T>* temp=head;
        head=head->next;
        delete temp;
    }

    T top(){
        return head->data;
    }

};

int main(){
    Stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    cout<<s.top()<<endl;
    cout<<s.isEmpty()<<endl; // returns 1 if true else 0 
    for(int i=0;i<3;i++){
        cout<<s.top()<<'\n';
        s.pop();
    }
    cout<<s.isEmpty()<<endl;

    return 0;
}

/*
STACK
Methods:
    push(data)
    pop()
    top()
    empty()
*/
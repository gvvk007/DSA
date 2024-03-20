#include<iostream>
using namespace std;

class List;

class Node{
   
    public:
        int data;

        Node* next;
        //Node(int d):data(d){};
        Node(int d){
            data=d;
            next=NULL;
        }

        int getData(){
            return data;
        }
};

class List{
    Node* head;
    Node* tail;

    public:
        List(){
            head = NULL;
            tail = NULL;
        }

        Node* start(){
            return head;
        }

        void push_front(int data){
            Node* n = new Node(data);
            if(head==NULL){
                head = tail = n ;
            } // 1->2->NULL
            
            else{
                n->next = head;
                head = n;
            }
        }

        void push_back(int data){
            Node* n = new Node(data);
            if(head==NULL){
                head = tail = n ;
            } // 1->2(tail)->n
            else{
                tail->next = n ;
                tail = n;
            }
        }

        void insert(int data,int pos){
            if(pos==0)
                push_front(data);
            else{
                Node* temp = head;
                for(int i=0;i<pos;i++){
                    temp = temp->next;
                }
                Node* n = new Node(data);
                n->next = temp->next;
                temp->next = n;
            }
        }

        void del(int pos){
            Node* temp = head;
            Node* prev = NULL;
            if(pos==0){
                head=head->next;
                delete temp;
            }
            else{
                for(int i=0;i<pos;i++){
                    prev = temp;
                    temp = temp->next;
                }
                prev->next = temp->next;
            }
        }


        int search(int key){
            int idx = 0;
            Node* temp=head;
            while(temp!=NULL){      
                if(temp->getData() == key){
                    return idx;
                }
                temp = temp->next;
                idx++;
            }
            
            return -1;

        }
                          
        void reverse(){   
            Node* p = NULL;           
            Node* c=head;
            Node* n;
            
            while(c!=NULL){
                n = c->next;
                c->next = p;
                p=c;
                c=n;     
            }
            head=p;
        }

        void print(){
            Node*temp=head;
            while(temp!=NULL){      
                cout<<temp->getData()<<"->";
                temp = temp->next;
            }
            cout<<endl;
        }



};
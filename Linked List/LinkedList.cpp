/*
Linked List
Methods:
    push_front(data)
    push_back(data)
    insert(data,pos)
    delete(pos)
    search(key)
    reverse()
    print()

*/

#include<iostream>
using namespace std;

class List;

class Node{
    int data;

    public:
        Node* next;
        //Node(int d):data(d){}; forward declaration
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

        Node* begin(){
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

int main(){
    List l;
    l.push_front(3);
    l.push_front(2);
    l.push_front(1);
    l.push_back(5);
    l.push_back(6);
    l.insert(4,2);
    l.insert(7,5);

    l.print();
    // int res = l.search(3);
    // cout<<res<<endl;

    
    l.del(0);
    l.print();
    l.del(2);
    l.print();
    // l.reverse();
    cout<<endl;

    return 0;
}

/*
Linked List
Methods:
    push_front(data)
    push_back(data)
    insert(data,pos)
    delete(pos)
    search(key)
    reverse()
    print()

*/
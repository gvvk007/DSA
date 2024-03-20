#include<stack>
#include<iostream>
using namespace std;

void InsertAtBottom(stack<int> &s,int data){
    if(s.empty()){
        s.push(data);
        return ;
    }
    int temp = s.top();
    s.pop();
    InsertAtBottom(s,data);
    s.push(temp);
} 

void reverse(stack<int> &s){
    if(s.empty()){
        return ;
    }
    int t=s.top();
    s.pop();
    reverse(s);
    InsertAtBottom(s,t);
    
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    //InsertAtBottom(s,0); //It inserts element at the bottom of stack 
    reverse(s);

    for(int i=0;i<5;i++){
        cout<<s.top()<<'\n';
        s.pop();
    }

    return 0;
}
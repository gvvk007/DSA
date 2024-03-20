#include<iostream>
using namespace std;
// Binary Tree construction

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d){
            data=d;
            left=right=NULL;
        }
};

Node* constructTree(int a[],int n){
    Node* t=NULL;
    static int i=0;
    if(i<n and a[i]!=-1){
        t=new Node(a[i]);
        i++;
        t->left=constructTree(a,n);
        t->right=constructTree(a,n);

    }  
    else{
        i++;
    }  
    return t;
}
//PRE ORDER
void print(Node* root){
    if(root==NULL)
        return;
    cout<<root->data<<' ';
    print(root->left);
    print(root->right);
}
int main(){
    int a[]={1,2,4,-1,-1,5,7,-1,-1,-1,3,-1,6,-1,-1};
    int n=sizeof(a)/sizeof(a[0]);
    Node* root=constructTree(a,n);
    print(root);
    return 0;
}

//      1
//   2    3 
// 4  5  6 7
//

// 1 2 3
//   1 4
// 2 4 5
//   2 3
// 3 6 7
//   5 6
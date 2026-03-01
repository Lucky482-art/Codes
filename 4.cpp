#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *left,*right;
};

Node* insert(Node* root,int x){
    if(root==NULL){
        Node* temp=new Node();
        temp->data=x; temp->left=temp->right=NULL;
        return temp;
    }
    if(x<root->data) root->left=insert(root->left,x);
    else root->right=insert(root->right,x);
    return root;
}

void inorder(Node* root){
    if(root){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

bool search(Node* root,int x){
    if(root==NULL) return false;
    if(root->data==x) return true;
    if(x<root->data) return search(root->left,x);
    return search(root->right,x);
}

int main(){
    Node* root=NULL;
    root=insert(root,50);
    insert(root,30);
    insert(root,70);
    inorder(root);
    cout<<"\nFound? "<<search(root,30);
}
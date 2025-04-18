/*
Traversal

1. Pre order traversal: print root, print left subtree, then print right subtree
    return when root == null 
    NLR

2. In order: left subtree, root, right, subtree 
    if left==null return
    LNR

3. Post order: left subtree, right subtree, root 
    LRN
    
4. Level order: Insert root, insert null
*/

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void preOrder(Node *root){// root left right
    if(root==NULL)return;
    cout<<root->data<<' ';
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node *root){// left root right
    if(root==NULL)return;
    inOrder(root->left);
    cout<<root->data<<' ';
    inOrder(root->right);
}
void postOrder(Node *root){//left right root
    if(root==NULL)return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<' ';
}
int main(){
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);
}

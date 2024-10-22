//Inorder traversal in BST is in sorted order: ascending order

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *right;
    Node *left;
    Node(int val){
        data=val;
        left=right=nullptr;
    }
};
Node *insert(Node *root, int val){
    if(root==nullptr){
        return new Node(val);
    }
    if(val<root->data){
        root->left=insert(root->left,val);

    }
    else{
        root->right=insert(root->right,val);
    }
    return root;
}
void inOrder(Node *root){
    if(!root)return;
    inOrder(root->left);
    cout<<root->data<<' ';
    inOrder(root->right);
}
int maxVal(Node *root){
    if(!root)return -1;

    if(root->right==NULL)return root->data;
    maxVal(root->right);
}
int minVal(Node *root){
    if(!root)return -1;
    if(root->left==NULL)return root->data;
    minVal(root->left);
}
int main(){
    Node *root=NULL;
    root=insert(root,5);
    insert(root,1);
    insert(root,3);
    insert(root,4);
    insert(root,2);
    insert(root,7);
    inOrder(root);
    cout<<endl;
    int x=maxVal(root);
    cout<<x<<endl;
    int y=minVal(root);
    cout<<y<<endl;
}
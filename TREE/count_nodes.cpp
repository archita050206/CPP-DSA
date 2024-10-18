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
int countNodes(Node *root){
    if(root==nullptr)return 0;
    return countNodes(root->left)+countNodes(root->right)+1;
}
int SumofNodes(Node *root){
    if(root==nullptr)return 0;
    return SumofNodes(root->left)+SumofNodes(root->right)+root->data;
}
int main(){
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    
    int x=countNodes(root);
    cout<<x<<endl;
    int y=SumofNodes(root);
    cout<<y<<endl;
}

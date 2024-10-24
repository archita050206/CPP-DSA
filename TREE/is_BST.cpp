#include<iostream>
#include<climits>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node *right;
    node(int val){
        data=val;
        left=right=NULL;
    }
};
bool is_BST(node *root, int min, int max){
    if(!root)return true;
    if(root->data<max && root->data>min){
        bool left=is_BST(root->left,min,root->data);
        bool right=is_BST(root->right,root->data,max);
        return left&&right;
    }
    return false;
}


bool  isBST(node *root){
    return is_BST(root, INT_MIN, INT_MAX);
}
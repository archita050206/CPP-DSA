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
    if (!root) return -1;
    while (root->right) {
        root = root->right;
    }
    return root->data;
}
int minVal(Node *root){
    if(!root)return -1;
    while(root->left){
        root=root->left;
    }
    return root->data;
}
Node* findmin(Node *root){
    if(!root)return nullptr;
    while(root->left){
        root=root->left;
    }
    return root;
}
Node* deletion(Node *root, int key){
    if(!root)return NULL;
    if(key<root->data){
        root->left=deletion(root->left,key);
    }
    else if(key>root->data){
        root->right=deletion(root->right,key);
    }
    else{/*
        //no child
        if(!root->left && !root->right){
            delete root;
            return  NULL;
        }
        */
        //one child
        if(!root->left){
            Node *temp=root->right;
            delete root;
            return temp;
        }
        else if(!root->right){
            Node *temp=root->left;
            delete root;
            return temp;
        }
        
            Node *temp=findmin(root->right);
            root->data=temp->data;
            root->right=deletion(root->right,temp->data);
        
    }
    return root;
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
    root=deletion(root,4);
    inOrder(root);
}
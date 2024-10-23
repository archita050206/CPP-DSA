#include<iostream>
#include<queue>
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
int height(Node *root){
    if(root==nullptr)return 0;
    int left=height(root->left);
    int right=height(root->right);
    return max(left,right)+1;
}
void deleteDeepest(Node *root, Node *key){// deletion function takes place here
    if(!root)return;
    queue<Node *>q;
    q.push(root);
    while(!q.empty()){
        Node *t=q.front();
        q.pop();
        if(t==key){
            t=nullptr;
            delete key;
            return;
        }
        if(t->left){
        if(t->left==key){
            t->left=nullptr;
            delete key;
            return;

        }
        else{
            q.push(t->left);
        }
        }
        if(t->right){
            if(t->right==key){
                t->right=nullptr;
                delete key;
                return;
            }
            else{
                q.push(t->right);
            }
        }
    }
}
//swappin of the last leaf node val takes place here
Node *deleteNode(Node *root, int key){//to find the node with the given value and pass it to the deletedeepest function
    if(!root)return nullptr;
    if(!root->left && !root->right){//only level order traversal done
        if(root->data==key){
        delete root;
        return nullptr;
        }
        
    }
    queue<Node *>q;
    q.push(root);
    Node *keyNode=nullptr;
    Node *t=nullptr;
    while(!q.empty()){
        t=q.front();
        q.pop();
        if(root->data==key)keyNode=root;
        if(t->left) q.push(t->left);
        if(t->right)q.push(t->right);
    }
    // t is the deepest node
    int val=t->data;
    deleteDeepest(root,t);
    keyNode->data=val;
    return root;
}
void inOrder(Node *root){
    if(!root)return;
    inOrder(root->left);
    cout<<root->data<<' ';
    inOrder(root->right);

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
    int z=height(root);
    cout<<z<<endl;
    inOrder(root);
    cout<<endl;
    deleteNode(root,1);
    inOrder(root);
}

#include<iostream>
#include<queue>
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

void printLevelOrder(Node *root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
   // q.push(NULL);
    while(!q.empty()){
        Node *temp=q.front();
        q.pop();
        if(temp){
            cout<<temp->data<<' ';
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);

        }
        
        /*
        else if(!q.empty()){
            q.push(NULL);
        }
        */
    }

}
void printSum(Node *root, int k){
    
    if(root==NULL){
        return;
    }
    int c=0;
    int sum=0;
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node *temp=q.front();
        q.pop();
        if(temp){
            if(c==k){
            sum+=temp->data;
           }
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);

        }
        else if(!q.empty()){
            c++;
            q.push(NULL);
        }
        
    }
    cout<<sum<<endl;

}
int main(){
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    printLevelOrder(root);
    printSum(root,2);
}
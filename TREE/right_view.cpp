#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data=val;
        left=right=nullptr;
    }
};
void rightView(Node *root){
    if(root==NULL)return;
    queue<Node *>q;
    q.push(root);
    while(!q.empty()){
        //we will not add null in queue, we will calculate the size of the queue
        //and check how many nodes are stored and traverse over it
        int n=q.size();
        for(int i=0;i<n;i++){
            //create a ptr which will start from the front of queue 
            Node *curr=q.front();
            q.pop();
            if(i==n-1)cout<<curr->data<<' ';
            if(curr->left)q.push(curr->left);
            if(curr->right)q.push(curr->right);
        }
    }
}
void leftView(Node *root){
    if(root==NULL)return;
    queue<Node *>q;
    q.push(root);
    while(!q.empty()){
        //we will not add null in queue, we will calculate the size of the queue
        //and check how many nodes are stored and traverse over it
        int n=q.size();
         Node *curr=q.front();
         cout<<curr->data<<' ';
        for(int i=0;i<n;i++){
            //create a ptr which will start from the front of queue 
           
            q.pop();
            
            
            if(curr->left)q.push(curr->left);
            if(curr->right)q.push(curr->right);
        }
    }
}
bool getPath(Node *root, int key,vector<int>&path){
    if(root==NULL)return false;
    path.push_back(root->data);
    if(root->data==key){
        return true;
    }
    if(getPath(root->left,key,path)||getPath(root->right,key,path)){
        return true;
    }
    path.pop_back();
    return false;
}
int LowestCommomAncestor(Node *root, int node1, int node2){
    vector<int>path1;
    vector<int>path2;
    if(!getPath(root,node1,path1)&&!getPath(root,node2,path2))return -1;
    
}
int main(){
   
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    leftView(root);
    
}
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;
    node(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};
node *createTree(vector<int>&v){
    if(v.empty())return nullptr;
    node *root=new node(v[0]);
    queue<node*>q;
    q.push(root);
    int i=1;
    while(i<v.size()){
        node *curr=q.front();
        q.pop();
        if(i<v.size()){
            curr->left=new node(v[i++]);
            q.push(curr->left);
        }
        if(i<v.size()){
            curr->right=new node(v[i++]);
            q.push(curr->right);
        }
    }
    return root;
}
void preorder(node *root){//nlr
    if(!root)return;
    cout<<root->data<<' ';
    preorder(root->left);
    preorder(root->right);
    
}

int main(){
    vector<int>v;
    int n,x;
    cout<<"Enter number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    
    node *root=createTree(v);
    preorder(root);
    cout<<endl;
}
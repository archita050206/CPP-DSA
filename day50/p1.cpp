#include<iostream>
using namespace std;
class node{
    public:
    node *left;
    node *right;
    int data;
    node(int val){
        data=val;
        left=right=nullptr;
    }
};
node* insert(node *root, int val){
if(!root)return new node(val);
if(val<root->data)root->left=insert(root->left,val);
else if(val>root->data)root->right=insert(root->right,val);
return root;
}
bool search(node *root, int val){
    if(!root)return false;
    if(root->data==val)return true;
    if(val<root->data)return search(root->left,val);
    else return search(root->right,val);
    
}
int main(){
    int n,x;
    cin>>n;
    node *root=nullptr;
    for(int i=0;i<n;i++){
        cin>>x;
        root=insert(root,x);
    }
    int key;
    cin>>key;
    bool b=search(root,key);
    (b==true)?cout<<"Present ":cout<<"Not present";
}
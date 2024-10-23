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
        left=right=NULL;
    }
};
Node *insert(Node *root, int val){
    if(!root)return new Node(val);
    if(val<root->data)root->left=insert(root->left,val);
    else if(val>root->data)root->right=insert(root->right,val);
    return root;
}
Node *mini(Node *root){
    if(!root)return nullptr;
    while(root->left){
        root=root->left;

    }
    return root;
}
Node *deletion(Node *root, int val){
    if(!root)return nullptr;
    if(val<root->data){

        root->left=deletion(root->left,val);
    }
    if(val>root->data){
        root->right=deletion(root->right,val);
    }
    else{
        //root has one child
        if(!root->left){
            Node *t=root->right;
            delete root;
            return t;
        }
        else if(!root->right){
            Node *t=root->left;
            delete root;
            return t;
        }
        //has two children
        Node *temp=mini(root);//mini node from right subtree
        root->data=temp->data;
        root=deletion(root->right,temp->data);
    }
    return root;
}
void lvlOrder(Node *root){
    if(!root)return;
    queue<Node *>q;
    q.push(root);
    while(!q.empty()){
        Node *t=q.front();
        q.pop();
        cout<<t->data<<' ';
        if(t->left){
            q.push(t->left);
        }
        if(t->right){
            q.push(t->right);
        }
    }
    cout<<endl;
    

}
bool search(Node *root,int val){
    if(!root)return false;
    if(root->data==val){
        return true;
    }
    if(val<root->data){
        return search(root->left,val);
    }
    else{
        return search(root->right,val);
    }
    return false;
}
Node* searchVal(Node *root,int val){
    if(!root)return nullptr;
    if(root->data==val){
        return root;
    }
    if(val<root->data){
        return searchVal(root->left,val);
    }
    else{
        return searchVal(root->right,val);
    }
    
}
int main(){
    Node *root=nullptr;
    int n,x;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int arr[200];
    for(int i=0;i<n;i++){
        cin>>x;
        root=insert(root,x);
    }
    lvlOrder(root);
    root=deletion(root,3);
    lvlOrder(root);
    bool b=search(root,3);
    cout<<b<<endl;
    Node *p=searchVal(root,3);
    if(!p)cout<<"Not present"<<endl;
    else cout<<"Present";
}
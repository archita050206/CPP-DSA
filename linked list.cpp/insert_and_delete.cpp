#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int val){
        data=val;
        next=nullptr;
    }
};
class LinkedList{
    node *head;
    public:
    LinkedList(){
    head=nullptr;
    }
    void insert(int n){
        node *p=new node(n);
        if(head==nullptr){
            head=p;
            return;
        }

        node *temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=p;
       
    }
    void display(){
        node *t=head;
        while(t){
            cout<<t->data<<"->";
            t=t->next;
        }
        cout<<"null";
    }
    void deletion(int val){
        node *temp=head;
        if(head==nullptr)return;
        if(temp->data==val){
            head=head->next;
            delete temp;
            return;
        }
        
        while(temp->next->data!=val && temp->next!=nullptr){
            temp=temp->next;
        }
        if(temp->next!=nullptr){
            node *c=temp->next;
            temp->next=temp->next->next;
            delete c;
        }
        

    }
    int search(int key){
        node *temp=head;
        while(temp){
            if(temp->data==key)return 1;
            temp=temp->next;
        }
        return 0;
    }
};
int main(){
    LinkedList h;
    int n,x,key;
    cout<<"Enter number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        h.insert(x);
    }
    cin>>key;
    h.display();
    //h.deletion(5);
    cout<<endl;
    h.display();
    cout<<endl;
    
    h.search(key)==1?cout<<"Present":cout<<"Not present";
}
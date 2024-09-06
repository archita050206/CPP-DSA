#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *prev;
    node *next;
    node(int n){
        prev=nullptr;
        next=nullptr;
        data=n;
    }
    
};
class LinkedList{
    node *head;
    public:
    LinkedList(){
        head=nullptr;
    }
    void insert(int n){
        node *temp=head;
        node *p=new node(n);
       
        if(head==nullptr){
            head=p;
            return;
        }
        
        while(temp->next){
            temp=temp->next;
        }
        temp->next=p;
        p->prev=temp;
        

    }
    void display(){
        node *t=head;
        while(t){
            cout<<t->data<<"->";
            t=t->next;
        }
        cout<<"nullptr";
    }
    void deleted(int key){
        if(head->data==key){
            node *t=head;
            head=head->next;
            head->prev=nullptr;
            delete t;
            return;
        }
        node *temp=head;
        while(temp->next->data!=key){
            temp=temp->next;
        }
        node *t=temp->next;
        temp->next=temp->next->next;
        delete t;
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
    LinkedList l;
    l.insert(1);
    l.insert(2);
    l.insert(3);

    l.display();
    cout<<endl;
    //l.deleted(1);
    //l.display();
    cout<<endl;
    l.search(5)==1?cout<<"present":cout<<"Not present";
}
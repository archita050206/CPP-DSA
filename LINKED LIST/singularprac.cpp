#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int x){
        data=x;
        next=nullptr;
    }
};
class LinkedList{
    node *head;
    public:
    LinkedList(){
        head=nullptr;
    }
    void insert_at_tail(int x){
        node *p=new node(x);
        if(!head){
            head=p;
            return;
        }
        node *t=head;
        while(t->next){t=t->next;}
        t->next=p;
    }
    void display(){
        node *t=head;
        while(t){
            cout<<t->data<<"->";
            t=t->next;
        }
        cout<<endl;
    }
    void evennode(){
        if(!head)return;
        node *t=head;
        int pos=1;
        node *fast=head;
        node *slow=nullptr;
        while(fast){
            if(pos%2==0){
                node *t=fast;
                slow->next=fast->next;
                delete t;
                fast=slow->next;
            }
            else{
                slow=fast;
                fast=fast->next;
            }
           
            pos++;
        }


    }
    void reverse(){
        if(!head)return;
        node *p=head;
        node *q=nullptr;
        node *r=nullptr;
        while(p){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        head=q;
    }
    void deleted(int pos){
        if(!head)return;
        node *t=head;
        for(int i=1;i<pos-1 && t;i++){
            t=t->next;
        }
        node *q=t->next;
        t->next=q->next;
        delete q;
    }
    void insathead(int x){
        
        node *p=new node(x);
        if(!head){
            head=p;
            return;
        }
        p->next=head;
        head=p;

    }
};
int main(){
    int n;
    cin>>n;
    LinkedList l;
    int c;
    for(int i=0;i<n;i++){
        cin>>c;
        l.insert_at_tail(c);
    }
    l.display();
    //l.evennode();
    //l.display();
    l.deleted(3);
    l.display();
    l.insathead(-1);
    l.insathead(-2);
    l.display();
    l.reverse();
    l.display();
}
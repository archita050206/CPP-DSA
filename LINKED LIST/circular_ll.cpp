#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int n){
        data=n;
        next=nullptr;
    }
};
class LinkedList{

    node *head;
    public:
    LinkedList(){
        head=nullptr;
    }
    
    void insert(int x){
        node *p=new node(x);
        if(!head){
            head=p;
            p->next=head;
            
        }
        else{
            node *temp=head;
            while(temp->next!=head){
            temp=temp->next;

            }
        temp->next=p;
        p->next=head;
        }

    }
    void dlthead(){
        if(!head)return;
        
        node *t=head;
        while(t->next!=head){
            t=t->next;
        }
        node *d=head;
        t->next=d->next;
        head=head->next;
        delete d;
        
    }
    void display(){
        if(!head)return;
        node *t=head;
        do{
            cout<<t->data<<"->";
            t=t->next;
        }while(t!=head);
        cout<<"nullptr";
    }
    bool detectloop(){
        node *slow=head;
        node *fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)return true;
        }
        return false;
    }
    void deletion(int key){
        node *fast=head;
        while(fast->next!=head){
            if(fast->next->data==key){
                node *t=fast->next;
                fast->next=t->next;
                delete t;
                return;
            }
            fast=fast->next;
        }
        
    }
    node* whereloop(){//considering loop already present, floyd's algorithhm
        if(!head)return nullptr;
        node *fast=head;
        node *slow=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                
                break;
            }
            
        }
        if(slow!=fast)return nullptr;
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
            
        }
        return slow;

    }
    void removeloop(){
        node *t=whereloop();
        if(!t)return;
        node *p=t;
        while(p->next!=t){
            p=p->next;
        }
        p->next=nullptr;
    }
};
int main(){
    LinkedList li;
    for(int i=0;i<10;i++){
        li.insert(i);
    }
    li.display();

    cout<<endl;
    li.dlthead();
    li.display();
    cout<<endl;
    li.detectloop()==1?cout<<"true":cout<<"false";
    cout<<endl;
    li.deletion(3);
    li.display();
    cout<<endl;
    node *p=li.whereloop();
    cout<<p->data<<endl;
    li.removeloop();
}
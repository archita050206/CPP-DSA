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
    private:
    node *head;
    public:
    LinkedList(){
        head=nullptr;
    }
    void include(int data){
        node *n=new node(data);
        if(!head){
            head=n;
            return;
        }
        node *t=head;
        while(t->next){
            t=t->next;
        }
        t->next=n;

    }
    void del(int key){
        if(!head)return;
        node *t=head;
        if(head->data==key){
            node *i=head;
            head=head->next;
            delete i;
        }
        while(t){
            if(t->next->data==key){
                break;
            }
            t=t->next;
        }
        node *c=t->next;
        t->next=c->next;
        delete c;

    }
    void display(){
        if(!head)return;
        node *t=head;
        while(t){
            cout<<t->data<<"->";
            t=t->next;
        }
        cout<<"nullptr"<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.include(2);  
    ll.include(3);  
    ll.include(5);  
    ll.include(8);  
    ll.include(18);  
    ll.include(4);  
    ll.display();
    ll.del(5);
    ll.display();
}
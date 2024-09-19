#include<iostream>
using namespace std;
class Stack{
    int *arr;
    int size;
    int top;
    public:
    Stack(int x){
        size=x;
        arr=new int[size];
        top=-1;
    }
    void push(int x){
        if(top==size-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
            return;
        }
        
        top--;
    }
    bool isempty(){
        if(top==-1)return true;
        else return false;
    }
    void printtop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
            return;
        }
        cout<<arr[top]<<endl;
    }
    void displayfull(){
        if(top==-1)return;
        while(top>=0){
        cout<<arr[top]<<' ';
        top--;
        }
        cout<<endl;
    }
    void display(){
        if(top==-1)return;
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<' ';
        }
        cout<<endl;
    }
};
int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.display();
    bool b=st.isempty();
    cout<<b<<endl;
   
    st.pop();
    st.displayfull();
}
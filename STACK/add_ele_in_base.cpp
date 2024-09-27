#include<iostream>
#include<stack>
using namespace std;
void addLast(stack<int>&s, int key){
    if(s.empty()){
        s.push(key);
        return;
    }
    int p=s.top();
    s.pop();
    addLast(s,key);
    s.push(p);
}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    addLast(st,10);
    while(!st.empty()){
        cout<<st.top()<<' ';
        st.pop();
    }
}
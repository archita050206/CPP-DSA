#include<iostream>
#include<stack>
using namespace std;
void sortInsert(stack<int>&st,int temp){
    if(st.empty()||st.top()<temp){
        st.push(temp);
        return;
    }
    int n=st.top();
    st.pop();
    sortInsert(st,temp);
    st.push(n);
}
void sortStack(stack<int>&st){
    if(st.empty())return;
    int temp=st.top();
    st.pop();
    sortStack(st);
    sortInsert(st,temp);
}
int main(){
    stack<int>s;
    s.push(7);
    s.push(9);
    s.push(1);
    s.push(3);
    s.push(2);
    sortStack(s);
    while(!s.empty()){
        cout<<s.top()<<' ';
        s.pop();
    }
}
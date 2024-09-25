#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    stack<int>st;
    queue<int>q1;
    for(int i=1;i<=10;i++){
        q.push(i);
    }
    for(int i=1;i<=10;i++){
        st.push(q.front());
        q.pop();
    }
    for(int i=1;i<=10;i++){
        q1.push(st.top());
        st.pop();
    }
    for(int i=1;i<=10;i++){
        cout<<q1.front()<<' ';
        q1.pop();
    }
}
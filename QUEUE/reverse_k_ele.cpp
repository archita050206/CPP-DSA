#include<iostream>
#include<queue>
#include<stack>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        int n=q.size();
        stack<int>st;
        for(int i=0;i<k;i++){
            st.push(q.front());
            q.pop();
        }
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        for(int i=0;i<(n-k);i++){
            int o=q.front();
            q.pop();
            q.push(o);
        }
        return q;
}
int main(){
    queue<int>q;
    for(int i=1;i<=5;i++){
        q.push(i);
    }
    queue<int>m=modifyQueue(q,3);
    while(!m.empty()){
        cout<<m.front()<<' ';
        m.pop();
    }
}
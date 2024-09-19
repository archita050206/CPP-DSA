#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    //push
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<"Top element: "<<st.top()<<endl;
    st.pop();
    cout<<"Top element: "<<st.top()<<endl;
    cout<<"Size: "<<st.size()<<endl;
    cout<<st.empty();
}
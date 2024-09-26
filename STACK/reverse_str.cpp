#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str="archita is a good girl";
    stack<char> st;
    for(char c:str){
        st.push(c);
    }
    string s;
    while(!st.empty()){
        s.push_back(st.top());
        st.pop();
    }
    cout<<s;
}
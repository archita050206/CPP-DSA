#include<iostream>
#include<stack>
#include<sstream>
using namespace std;
int main(){
    string str="archita is a good girl";
    stack<string>st;
    stringstream ss(str);
    string s;
    while(getline(ss,s,' ')){
        st.push(s);
    }
    string temp;
    while(!st.empty()){
        temp+=st.top();
        temp.push_back(' ');
        st.pop();
    }
    cout<<temp;

}
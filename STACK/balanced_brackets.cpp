#include<iostream>
#include<stack>
using namespace std;

bool  isBalanced(string str){
    stack<char>st;
    bool flag=true;
    for(char c:str){
        if(c=='('||c=='{'||c=='['){
            st.push(c);
        }
        else if(c==']'){
            if(!st.empty() && st.top()=='[')st.pop();
            else{
                flag=false;
                break;
            }
        }
        else if(c=='}'){
            if(!st.empty() && st.top()=='{')st.pop();
            else{
                flag=false;
                break;
            }
        }
        else if(c==')'){
            if(!st.empty() && st.top()=='(')st.pop();
            else{
                flag=false;
                break;
            }
        }
    }
    if(!st.empty())flag=false;
    return flag;
}
int main(){
    string str="{}";
    bool b=isBalanced(str);
    (b==0)?cout<<"not balanced":cout<<"balanced";
}
#include<iostream>
using namespace std;
string concatenateStrings(string &str1, string &str2){
    return str1+str2;
}
int main(){
    string s1;
    getline(cin,s1);
    string s2;
    getline(cin,s2);
    string str=concatenateStrings(s1,s2);
    cout<<str;
}
#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string str){
    int x=str.length();
    for(int i=0;i<x/2;i++){
        if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122){
        if(str[i]>=65 && str[i]<=90){
            str[i]=str[i]+32;
        }
           
        if(str[i]!=str[x-i-1]){
         
            return false;
        }
    }
    }
    return true;
}
int main(){
    
    string str;
    getline(cin,str);
    bool b=isPalindrome(str);
    (b==0)?cout<<"Not Palindrome":cout<<"Palindrome";
}
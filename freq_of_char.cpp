#include<iostream>
#include<string>
using namespace std;
int countCharacter(string str, char c){
    int k=0;
    for(char ch:str){
        if(ch==c){
            k++;
        }
    }
    return k;
}
int main(){
    string str;
    getline(cin,str);
    char c;
    cin>>c;
    int x=countCharacter(str,c);
    cout<<x;
}
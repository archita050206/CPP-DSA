#include<iostream>
#include<string>
using namespace std;
int stringLength(string str){
    int k=0;
    for(char c:str){
        k++;
    }
    return k;
}
int main(){
    string str;
    
    getline(cin,str);
    int x=stringLength(str);
    cout<<x;
}
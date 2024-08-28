#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string str;
    cout<<"Enter a word: ";
    getline(cin,str);
    int vowel=0;
    int conso=0;
    for(char c:str){
        c=tolower(c);
        if(c=='a'||c=='i'||c=='e'||c=='o'||c=='u'){
            vowel++;
        }
        else if(c>'a' && c<='z')conso++;
    }
    cout<<"Number of vowels: "<<vowel<<endl;
    cout<<"Number of consonents: "<<conso;
}
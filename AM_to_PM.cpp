#include<iostream>
#include<string>
using namespace std;
string convo(string s){
    string am=s.substr(8,2);
    int hour=stoi(s.substr(0,2));
    if(am=="AM" && hour==12){
        hour=0;

    }
    if(am=="PM" && hour!=12){
        hour+=12;
    }
    string ans=(hour<10)?'0'+to_string(hour):to_string(hour);
    return ans+s.substr(2,6);

}
int main(){
    string str="07:05:24PM";
    string ans=convo(str);
    cout<<ans;
}
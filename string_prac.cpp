#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    string str;
    getline(cin,str);
    cout<<n<<endl;
    cout<<str;
}
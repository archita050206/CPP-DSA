#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream f1("text.txt");
    if(!f1)cout<<"error"<<endl;
    string line;
    while(!f1.eof()){
        getline(f1,line);
        cout<<line<<endl;
    }
    f1.close();
}
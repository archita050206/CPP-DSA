#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file("text.txt", ios::app);//specifying that im appending stuff
    if(!file){
        cout<<"error"<<endl;
        return -1;

    }
    file<<"A"<<endl;
    file<<"B"<<endl;
    //ostream flag by default out
    //istream by default in
}
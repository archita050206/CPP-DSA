#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file("text.txt");
    if(!file){
        cout<<"Error"<<endl;
    }
    else{
        cout<<"Success"<<endl;
    }
    if(file.is_open()){
        //returns true if file successfully opened
    }
    file.close();
}
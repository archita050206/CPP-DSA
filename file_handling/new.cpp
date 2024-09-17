#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file("test1.txt",ios::out);
    if(file){
        file<< "testing with line1"<<endl;
        file.close();


    }
    else{
        cout<<"Error in opening line"<<endl;
        return -1;
    }
    string line;
    file.open("test1.txt",ios::in);
    if(file){
        while(getline(file,line)){
            
            cout<<"Read: "<<line<<endl;
        }
        file.close();
    }
    else{
        cout<<"Error in opening file "<<endl;
        return -1;
    }
    file.open("test1.txt", ios::app);
    if(file){
        file<<"testing with line 2"<<endl;
        file.close();
    }
    else{
        cout<<"error in opening file"<<endl;
        return -1;
    }
}
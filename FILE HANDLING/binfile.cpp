#include<fstream>
#include<iostream>
using namespace std;
int main(){
    char name[50]="Hello";
    int age=10;
    ofstream file("binary",ios::binary);
    file.write(name, sizeof(name));
    file.write(reinterpret_cast<char*>(&age), sizeof(age));//converting int into a character ptr
    file.close();
    char name2[50];
    ifstream file2("binary", ios::binary);
    file2.read(name2, sizeof(name2));
    cout<<"Name: "<<name2;
    file2.close();
}
//created inside class
//one class can have multiple constructors(constructor oerloading), first write default constructor and then overload it


#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int roll;
    int age;
    student(){
        cout<<"This is default constructor";
    }
    student(string n, int r, int a){
        name=n;
        roll=r;
        age=a;
    }
    void print(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll :"<<roll<<endl;        
        cout<<"Age :"<<age<<endl;        

    }
};
int main(){
   
    string n;
    int r,a;
    getline(cin,n);
    cin>>r>>a;
    student s1(n,r,a);
    s1.print();
}
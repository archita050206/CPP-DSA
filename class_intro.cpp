#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int roll;
    int age;
};
int main(){
    student s1;
    student s2;
    student s3;
    //getline(cin,s1.name);
    cin>>s1.name;
    cin>>s1.roll;
    cin>>s1.age;
    //getline(cin,s2.name);
    cin>>s2.name;
    cin>>s2.roll;
    cin>>s2.age;
    //getline(cin,s3.name);
    cin>>s3.name;
    cin>>s3.roll;
    cin>>s3.age;
    cout<<s1.name;
}
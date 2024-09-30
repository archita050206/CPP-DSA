#include<iostream>
#include<tuple>
#include<string>
using namespace std;
class Person{
    string firstName;
    string lastName;
    int age;
    public:
    Person(string fname, string lname, int x){
        firstName=fname;
        lastName=lname;
        age=x;
    }
    string getFullName(){
        return firstName+' '+lastName;
    }
    void details(){
        cout<<"First name: "<<firstName<<endl;
        cout<<"Last name: "<<lastName<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main(){
    Person p("Archita","Das",18);
    string n=p.getFullName();
    cout<<"First name: "<<n<<endl;
    p.details();
}
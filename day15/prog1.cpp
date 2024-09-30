#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int roll_no;
    int regd;
    string sec;
    public:
    student(string n, int r, int regd, string s){
        this->name=n;
        this->roll_no=r;
        this->regd=regd;
        this->sec=s;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll number: "<<roll_no<<endl;
        cout<<"Registration number: "<<regd<<endl;
        cout<<"Section: "<<sec;
    }
};
int main(){
    string name="Archita Das";
    int r=2;
    int regd=456;
    string sec="srr";
    student st(name,r,regd,sec);
    st.display();
}
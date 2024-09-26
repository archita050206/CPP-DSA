#include<iostream>
using namespace std;
class Rect{
    private:
    int len;
    int breadth;
    public:
    Rect(int l, int b):len(l),breadth(b){}
    Rect(const Rect &ren){
        len=ren.len;
        breadth=ren.breadth;
    }
    void display(){
        cout<<"length is "<<len<<" breadth is "<<breadth<<endl;
    }
};
int main(){
    Rect r(10,20);
    r.display();
    Rect rel=r;
    rel.display();
}
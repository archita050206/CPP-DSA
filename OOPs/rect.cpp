#include<iostream>
using namespace std;
class Rectangle{
    private:
    int breadth;
    public:
    void setBreadth(int b){
        breadth=b;
    }
    int getBreadth(){
        return breadth;
    }

};
int main(){
    Rectangle r;
    r.setBreadth(5);
    int k=r.getBreadth();
    cout<<k;
}
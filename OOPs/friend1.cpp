#include<iostream>
#include<iomanip>
using namespace std;
class Rectangle{
    private: 
    int length,breadth;
    public:
    friend double area(Rectangle &obj);
};
double area(Rectangle &obj){
    cin>>obj.length>>obj.breadth;
    double area=static_cast<double>(obj.length)*obj.breadth;
    return area;
}
int main(){
    
    Rectangle obj;
    double x=area(obj);
    cout<<fixed<<setprecision(2)<<x;
}
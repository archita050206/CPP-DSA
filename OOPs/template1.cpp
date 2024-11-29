#include<iostream>
#include<iomanip>
using namespace std;

template <typename T>
class calculator{
    private:
    T a;
    T b;
    public:
    calculator(T c, T d){
        a=c;
        b=d;
    }
    T sum(){
        return a+b;
    }
    T diff(){
        return a-b;
    }
};
int main(){
    calculator<int> obj1(2,1);
    int x=obj1.sum();
    int y=obj1.diff();
    cout<<"Sum: "<<x<<endl;
    cout<<"Differrence: "<<y<<endl;

    calculator<double> obj3(2.0,1.0);
    double x1=obj3.sum();
    double y1=obj3.diff();
    cout<<fixed<<setprecision(2);
    cout<<"Sum: "<<x1<<endl;
    cout<<"Differrence: "<<y1;


}

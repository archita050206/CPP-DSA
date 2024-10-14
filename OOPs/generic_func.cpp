#include<iostream>
using namespace std;
template <typename T>
T add(T n1, T n2){
    return n1+n2;
}
int main(){
    cout<<add<int>(4,5)<<endl;
    cout<<add<double>(4.75,5.50)<<endl;
}
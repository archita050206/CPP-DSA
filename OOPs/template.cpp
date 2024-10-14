#include<iostream>
using namespace std;
// class sum{
//     int n1,n2;
//     public:
//     sum(int a,int b){
//         n1=a;
//         n2=b;
//     }
//     void addition(){
//         cout<<n1+n2<<endl;
//     }
// };
template <class T>
class sum{
    T n1,n2;
    public:
    sum(T a,T b){
        n1=a;
        n2=b;
    }
    void addition(){
        cout<<n1+n2<<endl;
    }
    void sub();
};
template <class T>
void sum<T>::sub(){
    cout<<n1-n2<<endl;
}
int main(){
    //sum s(5,6);
   // s.addition();
   sum<int>obj(1,5);
   obj.addition();
   obj.sub();
   sum<string>str("Hello"," World");
   str.addition();
   sum<double>db(2.5,2.765);
   db.addition();

}
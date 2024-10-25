#include<iostream>
using namespace std;
int s=0;
int tower(int n, char from, char to, char aux){
    if(n==0){
       // s++;
        return s;
    }
    tower(n-1,from,aux,to);
    s++;
    cout<<"Move from "<<from<<" to "<<to<<endl;
    tower(n-1,aux,to,from);
}
int main(){
    int n=3;
    int sum=tower(3,'A','B','C');
    cout<<sum<<endl;
}
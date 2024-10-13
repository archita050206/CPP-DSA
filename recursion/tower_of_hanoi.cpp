#include<iostream>
using namespace std;
void tower(int n, char from, char to){
    if(n==0){
        return;
    }
    tower(n-1,from,to);
    cout<<"Move from "<<from<<" to "<<to<<endl;
    tower(n-1,to,from);
}
int main(){
    int n=2;
    tower(2,'A','B');
    
}
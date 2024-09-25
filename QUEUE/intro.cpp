#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q1;
    for(int i=1;i<10;i++){
        q1.push(i);
    }
    cout<<q1.front()<<endl;
    q1.pop();
    cout<<q1.front()<<endl;
    cout<<q1.back()<<endl;
}
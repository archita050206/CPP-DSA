//set
//stores unique elements of same type in a sorted manner
//Properties: unique elements, immutable, sorted order

#include<iostream>
#include<set>
using namespace std;
int main(){
    //for descending order
    set<int, greater<int>> set1={1,2,3,4,5};
    set1.insert(0);
    //to check size
    int num=5;
    if(set1.count(num)==1){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    set1.erase(5);
    for(auto i:set1){
        cout<<i<<' ';
    }
    cout<<endl;
    //set1.clear();
    //to check whether empty or not
    cout<<set1.empty();
}
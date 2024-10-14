#include<iostream>
using namespace std;
template<typename T1, typename T2>
void displayLoot(T1 item, T2 quantity){
    cout<<"You received "<<quantity<<"kgs of "<<item<<endl;
}
int main(){
    displayLoot("Gold",60);//no need to mention data types
    displayLoot("Platinum",70);
}
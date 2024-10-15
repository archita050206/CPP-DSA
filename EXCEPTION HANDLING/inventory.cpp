#include<iostream>
#include<vector>
using namespace std;
void useItem(vector<string>inventory,int index){
    try{
        if(index<0  || index>=inventory.size()){
            throw out_of_range("Invalid item");
        }
        cout<<inventory[index]<<endl;
    }
    catch(out_of_range e){
        cout<<"Exception : "<<e.what()<<endl;
    }
}

int main(){
    vector<string>inventory={"Medicine","HealthDrink"};
    useItem(inventory,1);
}
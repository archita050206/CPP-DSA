#include<iostream>
#include<vector>

using namespace std;
template<class T>
class Player{
    private:
    T stats;
    public:
    Player(T s){
        stats=s;
    }
    T getStats(){
        return stats;
    }
    void setStats(T val){
        stats+=val;
    }
};



template<typename T>
void displayInventory(vector<T> & items){
    for(T i:items){
        cout<<i<<' ';
    }
}
int main(){
    vector<int>coins={10,20,30};
    vector<string>weapon={"Sword","Bow","Shiled"};
    vector<float>exlixer={1.5,2.5};
    displayInventory(coins);
    displayInventory(weapon);
    displayInventory(exlixer);
    Player<int>pp(6);
    pp.setStats(5);
    cout<<pp.getStats();

}
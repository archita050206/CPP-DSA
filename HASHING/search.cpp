// You are using GCC
#include<iostream>
#include<string>
# define size 1000
using namespace std;
class student{
    public:
    int id;
    string name;
    bool occu;
    student(){
        this->id=0;
        this->name="";
        this->occu=false;
    }
};
int idx(int id){
    return id%size;
}
void insert(student h[], int id, string str){
    int index=idx(id);
    while(h[index].occu){
        index=(index+1)%size;
    }
    h[index].id=id;
    h[index].name=str;
    h[index].occu=true;
}
string search(student h[],int key){
    int index=idx(key);
    while(h[index].occu){
        if(h[index].id==key){
            return h[index].name;
        }
        index=(index+1)%size;
        if(index==size)break;
        
        
    }
    return "Student not found";
}
int main(){
    
    int n;
    cin>>n;
    student arr[size];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        string s;
        cin>>s;
        insert(arr,x,s);
    }
    int key;
    cin>>key;
    string ans=search(arr,key);
    cout<<"Student name: "<<ans;
}









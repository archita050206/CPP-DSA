#include<iostream>
#include<string>
using namespace std;
int main(){
    int num,dem,arr[5]={4,5,6,7,8},index;
    cout<<"Enter array index: ";
    cin>>index;
    cout<<"Enter numerator: ";
    cin>>num;
    cout<<"Denominator: ";
    cin>>dem;
    try{
        
        if(index>=5 || index<0){

            throw "Array out of bound";
        }
        if(dem==0){
            throw 0;

        }
        arr[index]=num/dem;
        cout<<arr[index]<<endl;
    }
    catch(const char* e){
        cout<<e<<endl;
    }
    catch(int e){
        cout<<e<<endl;
    }
}
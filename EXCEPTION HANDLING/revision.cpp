//try: code that may throw exception
//throw: throws an exception
//catch: handles the exception thrown in the try block

//try{
// code may throw __cpp_exception
// throw___;
// }
// catch  (e){
    
// }

#include<iostream>
#include<string>
using namespace std;
void func(int val){
    if(val==0)throw "Zero is not allowed";
    if(val<0)throw val;
    if(val>0)throw runtime_error("Not a valid number");
}
int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;
    try{
    func(num);
    }
    catch(const char *e){
        cout<<"String exception: "<<e<<endl;
    }
    catch(int e){
        cout<<"Integer exception: "<<e<<endl;

    }
    catch(runtime_error e){
        cout<<"Runtime exception: "<<e.what()<<endl;
    }
}
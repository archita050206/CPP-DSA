#include<iostream>
using namespace std;

// operator overloading 
// compile time polyphormism

class Counter{
    private:
    int value;
    public:
    Counter(int val){
        value=val;
    }
    // ++ => increment the value 
    void operator ++(){
        value+=5;
    }
    void print(){
        cout<<"The counnter value is: "<<value<<endl;
    }
    void operator --(){
        value-=2;
    }
};
int main(){
    Counter c1(2);
    c1.print();
    ++c1;
    c1.print();
    --c1;
    c1.print();
}
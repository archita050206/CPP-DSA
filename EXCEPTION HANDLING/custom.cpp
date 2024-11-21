#include<iostream>
#include<string>
using namespace std;
class InsufficientFunds: public exception{
    string message;
    public:
    InsufficientFunds(double balance, double amount){
        message= "Insufficient balance: attempted to withdraw Rs. "+to_string(amount)+
        " but balance is "+to_string(balance);
    }
    const char * what() const noexcept override{
        return message.c_str();
    }
};
class BankAccount{
    double balance;
public:
BankAccount(double iniBal){
    balance=iniBal;
}
void withdraw(double amount){
if(amount>balance){
    throw InsufficientFunds(balance, amount);
}
balance-=amount;
cout<<"Withdraw successful!"<<endl;
}

};
int main(){
BankAccount acc(500.0);
try{
    acc.withdraw(1000);
}
catch(InsufficientFunds e){
    cout<<"Exception : "<<e.what()<<endl;
}
}
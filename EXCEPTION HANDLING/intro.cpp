// power=health/enemiesKilled
// At the end of the game, I will display the power
// but during gameplay, user killed 0 enemies -> power : undefined -> crash

// How we handle?
/*
try
{
    code that may raise exception throw
}
catch (e)
{
    code to handle the exception
}
1. We will place the code that might generate exception inside the try block
    Every try block is followed by the catch block

2. When an exception occurs. the theow statement throws an exception which is caught by the catch block

3. The catch block cannot be used without the try block
*/


#include <iostream>
using namespace std;
int main()
{
    double numerator, denominator;
    cout<<"Enter numerator: ";
    cin>>numerator;
    cout<<"Enter denominator: ";
    cin>>denominator;
    try{
        if(denominator==0){
            throw runtime_error("");
        }
        //if try is true it goes directly to the catch section and ignores the further calculation steps
        cout<<"Proceeding to next calculation"<<endl;
        double ans=numerator/denominator;
        cout<<"Answer is: "<<ans<<endl;
    }
    catch(int e){
        cout<<"Exception caught -> "<<e<<endl;
    }

}
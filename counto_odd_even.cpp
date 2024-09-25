#include <iostream>
using namespace std;
int main()
{
    int n;
    int o = 0;
    int e = 0;
    cout << "enter size of array: ";
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            e++;
        else
            o++;
    }
    cout << "Number of odd numbers: " << o << endl;
    cout << "Number of even numbers: " << e;
}
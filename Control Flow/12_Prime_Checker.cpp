#include <iostream>
using namespace std;

int main(){

    int k;
    cout << "Enter a number: ";
    cin >> k;

    for (int i = k-1; 1; i--)
    {
        if (i < 1)
        {
            cout << k << " is not a prime number.";
            break;
        }        
        else if (i == 1)
        {
            cout << k << " is a prime number.";
            break;
        }  
        else if (k%i == 0)
        {
            cout << k << " is not a prime number.";
            break;
        }
    }
}
#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int binary, check = 1, decimal = 0, N = 0;
    cout << "Enter a binary number: ";
    cin >> binary;
    int temp = binary;

    while (temp != 0)
    {
        if (temp % 10 != 0 && temp % 10 != 1)
        {
            cout << "You didn't enter a binary number!";
            check = 0;
            break;
        }
        if (temp % 10 == 1)
        {
            decimal += pow(2,N);
        }
        N++;
        temp /= 10;
    }
    
    if (check == 1)
    {
       cout << "The decimal value of " << binary << " is " << decimal;
    }
}
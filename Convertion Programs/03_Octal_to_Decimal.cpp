#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int octal, decimal = 0, check = 1, N = 0;
    cout << "Please Enter an octal number: ";
    cin >> octal;
    int temp = octal;

    while (temp != 0)
    {
        if ( (temp%10) > 7)
        {
            cout << "You didn't enter a octal number!";
            check = 0;
            break;
        }

        decimal += (temp%10) * pow(8,N);
        N++;
        temp /= 10;
    }
    
    if (check == 1)
    {
       cout << "The decimal value of " << octal << " is " << decimal;
    }
}
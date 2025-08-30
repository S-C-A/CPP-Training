#include <iostream>
using namespace std;

int main(){

    int k, sqr, res = 0;
    cout << "Enter a number: ";
    cin >> k;
    sqr = k*k;

    while (sqr > 0)
    {
        res = res + (sqr%10);
        sqr = sqr/10;
    }
    
    if (res == k)
    {
        cout << k << " is a neon number.";
    }
    else
    {
        cout << k << " is not a neon number.";
    }
    
    
    



}
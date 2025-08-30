#include <iostream>
using namespace std;

int main(){

    int n, res = 0;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = n; i > 0; i = i/10)
    {
        res = (res*10) + i%10;
    }
    
    if (res == n)
    {
        cout << n << " is a palindrome.";
    }
    else
    {
        cout << n << " is not a palindrome.";
    }
}
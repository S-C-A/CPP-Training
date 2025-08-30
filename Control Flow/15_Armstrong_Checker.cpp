#include <iostream>
using namespace std;

int main(){

    int n, k, calc = 1, res = 0, digit = 0;
    cout << "Enter a number: ";
    cin >> n;
    k = n;

    while(k > 0){

        digit++;
        k = k/10;
    }

    k = n;

    while (k > 0)
    {
        calc = 1;
        for (int i = 0; i < digit; i++)
        {
            calc = calc * (k%10);
        }
        
        res = res + calc;
        k = k/10;
    }

    cout << res << "\n";
    
    if (res == n)
    {
        cout << n << " is an armstrong number.";
    }
    else
    {
        cout << n << " is not an armstrong number.";
    }
    
    
    
}
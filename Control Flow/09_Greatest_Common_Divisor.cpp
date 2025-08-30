#include <iostream>
using namespace std;

int main(){

    int x,y;
    cout << "Enter two numbers.\n";
    cin >> x >> y;

    if (y>x)
    {
        x = y+x;
        y = x-y;
        x = x-y;
    }

    for (int i = y; i > 0; i--)
    {
        if (x%i == 0 && y%i == 0)
        {
            cout << i << " is the greatest common divisor.";
            break;
        }
        
    }
    
}
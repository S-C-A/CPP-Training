#include <iostream>
using namespace std;

int main(){

    int x,y,lcm;
    cout << "Enter two numbers.\n";
    cin >> x >> y;

    if (y>x)
    {
        x = y+x;
        y = x-y;
        x = x-y;
    }

    lcm = x;

    while (1)
    {
        if (lcm%x == 0 && lcm%y == 0)
        {
            cout << lcm << " is the least common multiple";
            break;
        }
        lcm++;
        
    }
    
        




}
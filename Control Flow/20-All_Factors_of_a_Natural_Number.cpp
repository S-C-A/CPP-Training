#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter a nunber: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n%i == 0)
        {
            cout << i << " is a natural divider of " << n << "\n";
        }
        
    }
}
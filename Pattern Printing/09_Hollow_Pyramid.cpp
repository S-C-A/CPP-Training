#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter pyramid size: ";
    cin >> n;

    for (int i = 1; i <= n - 1; i++)
    {
        for (int k = n; k > i; k--)
        {
            cout << " ";
        }
        
        cout << "*";

        for (int k = (2*i)-3; k > 0; k--)
        {
            cout << " ";
        }
                
        if (i != 1)
        {
            cout << "*";
        }
        
        cout << "\n";
    }


    for (int i = n; i > 0; i--)
    {
        for (int k = n; k > i; k--)
        {
            cout << " ";
        }
        
        cout << "*";

        for (int k = (2*i)-3; k > 0; k--)
        {
            cout << " ";
        }
                
        if (i != 1)
        {
            cout << "*";
        }
        
        cout << "\n";
    }
}
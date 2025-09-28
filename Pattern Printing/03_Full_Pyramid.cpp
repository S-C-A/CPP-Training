#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter pyramid size: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int k = n - i; k > 0; k--)
        {
            cout << " ";
        }
        cout << "*";

        for (int k = 0; k < i*2; k++)
        {
            cout << "*";
        }
        
        cout << "\n";
        
    }
    







}
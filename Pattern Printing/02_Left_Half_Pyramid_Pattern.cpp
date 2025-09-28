#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter pattern size: ";
    cin >> n;
    
    for (int i = n; i > 0; i--)
    {
        for (int l = 0; l < i; l++)
        {
            cout << " ";
        }
        
        for (int k = n-(i-1); k > 0; k--)
        {
            cout << "*";
        }
        cout << "\n";
        
    }
}
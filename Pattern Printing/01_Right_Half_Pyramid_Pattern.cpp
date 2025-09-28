#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter pattern size: ";
    cin >> n;
    
    for (int i = 1; i <= n ; i++)
    {
        for (int k = 0; k < i ; k++)
        {
            cout << "* ";
        }
        cout << "\n";
        
    }
}
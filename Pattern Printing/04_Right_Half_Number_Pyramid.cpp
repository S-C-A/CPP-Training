#include <iostream>
using namespace std;

int main(){

    int n, z = 1;
    cout << "Enter pattern size: ";
    cin >> n;
    
    for (int i = 1; i <= n ; i++)
    {
        for (int k = 0; k < i ; k++)
        {
            cout << z <<" ";
            z++;
        }
        cout << "\n";
        
    }
}
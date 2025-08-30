#include <iostream>
using namespace std;


int main(){

    int n, res = 1;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = n; i > 0; i--)
    {
        res = res * i;
    }
    
    cout << res;



}
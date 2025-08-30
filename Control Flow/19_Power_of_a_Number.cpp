#include <iostream>
using namespace std;

int main(){

    int x, y, res = 1;
    cout << "Enter a number and its power.\n";
    cin >> x >> y;

    for (int i = 0; i < y; i++)
    {
        res = res * x;
    }

    cout << res;
    



}
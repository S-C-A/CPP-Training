#include <iostream>
using namespace std;

int fib(int);

int main() {
    
    int n, res = 0;
    cout << "Enter a number: ";
    cin >> n;
    n *= 2;

    for (int i = 2; i <= n; i += 2)
    {
        res = res + fib(i);
    }
    
    cout << res;
}

int fib(int n) {

    if (n <= 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}
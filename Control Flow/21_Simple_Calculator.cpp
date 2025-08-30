#include <iostream>
using namespace std;

int main(){

    int x, y;
    char oper;
    
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;

    cout << "Enter two numbers.\n";
    cin >> x >> y;

    switch (oper)
    {
    case '+':
        cout << x+y;
        break;
    
    case '-':
        cout << x-y;
        break;
    
    case '*':
        cout << x*y;
        break;
    
    case '/':
        cout << x/y;
        break;
    
    default:
        break;
    }

}
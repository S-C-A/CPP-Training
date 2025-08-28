#include <iostream>
using namespace std;

int main (){

    int a = 10, b = 40;
    cout << "The initial numbers are a: " << a << " b: " << b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nThe final numbers are a: " << a << " b: " << b;

}
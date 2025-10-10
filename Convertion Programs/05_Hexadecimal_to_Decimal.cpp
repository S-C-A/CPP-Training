#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string hex;
    cout << "Please enter a hexadecimal number: ";
    cin >> hex;

    int decimal = 0;
    int power = 1; 


    for (int i = hex.length() - 1; i >= 0; i--) {
        char ch = hex[i];
        int value;

        if (ch >= '0' && ch <= '9')
            value = ch - '0';
        else if (ch >= 'A' && ch <= 'F')
            value = 10 + (ch - 'A');
        else if (ch >= 'a' && ch <= 'f')
            value = 10 + (ch - 'a');
        else {
            cout << "Invalid hexadecimal digit: " << ch << endl;
            return 1;
        }

        decimal += value * power;
        power *= 16;
    }

    cout << "The decimal value of " << hex << " is " << decimal << endl;
    return 0;
}

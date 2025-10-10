#include <iostream>
using namespace std;

int main() {
    int decimal;
    cout << "Please enter a decimal number: ";
    cin >> decimal;

    char hex[20]; 
    int i = 0;
    int temp = decimal;

    if (decimal == 0) {
        cout << "The hexadecimal value of 0 is 0";
        return 0;
    }

    while (temp != 0) {
        int remainder = temp % 16;

        if (remainder < 10)
            hex[i] = remainder + '0';
        else
            hex[i] = remainder - 10 + 'A';

        i++;
        temp /= 16;
    }

    cout << "The hexadecimal value of " << decimal << " is ";

    for (int j = i - 1; j >= 0; j--)
        cout << hex[j];

    return 0;
}

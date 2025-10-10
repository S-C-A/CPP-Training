#include <iostream>
using namespace std;

int main() {
    int decimal;
    cout << "Please enter a decimal number: ";
    cin >> decimal;

    int octal = 0, place = 1;
    int temp = decimal;

    while (temp != 0) {
        int remainder = temp % 8;
        octal += remainder * place;
        place *= 10;
        temp /= 8;
    }

    cout << "The octal value of " << decimal << " is " << octal;
    return 0;
}

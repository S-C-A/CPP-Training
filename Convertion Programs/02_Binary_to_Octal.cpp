#include <iostream>
using namespace std;

int main() {
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int temp = binary;
    int check = 1;

    while (temp != 0) {
        int digit = temp % 10;
        if (digit != 0 && digit != 1) {
            cout << "You didn't enter a binary number!";
            check = 0;
            break;
        }
        temp /= 10;
    }

    if (check == 1) {
        int octal = 0, k = 1;

        while (binary != 0) {
            int triple = 0, N = 0;
            int temp2 = binary % 1000;

            while (temp2 != 0) {
                if (temp2 % 10 == 1) {
                    triple += (1 << N);
                }
                N++;
                temp2 /= 10;
            }

            octal += triple * k;
            k *= 10;
            binary /= 1000;
        }

        cout << "The octal value is " << octal;
    }

    return 0;
}

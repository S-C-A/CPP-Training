#include <iostream>
using namespace std;

int main() {
    int decimal;
    cout << "Please enter a decimal number: ";
    cin >> decimal;

    long long binary = 0; 
    int place = 1;       

    int temp = decimal;

    while (temp != 0) {
        int remainder = temp % 2;  
        binary += remainder * place;
        place *= 10;
        temp /= 2;
    }

    cout << "The binary value of " << decimal << " is " << binary;
    return 0;
}

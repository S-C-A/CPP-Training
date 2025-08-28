//T(°C) = (T(°F) - 32) × 5/9
#include <iostream>
using namespace std;

int main (){

    int fah;
    cout << "Enter a fahrenheit value: ";
    cin >> fah;

    cout << fah << " degrees fahrenheit is " << ((fah - 32)*5)/9  << " degrees celsius";

}


#include <iostream>
using namespace std;

int main(){

    int money, time, rate;
    cout << "Enter initial loan, the interest rate, and the amount of time units.\n";
    cin >> money >> rate >> time;
    cout << "The total debt is: " << money+((money/100)*rate)*time;
    cout << "\nThe simple interest is: " << (money*rate*time)/100;

}
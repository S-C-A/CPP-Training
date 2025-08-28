#include <iostream>
using namespace std;

int main(){

    int time;
    float money, rate, debt;
    cout << "Enter initial loan, the interest rate, and the amount of time units.\n";
    cin >> money >> rate >> time;
    debt = money;  

    for (int i = 0; i < time; i++)
    {
        money = money + (money/100)*rate;
    }
    
    cout << "The total debt is: " << money;
    cout << "\nThe compound interest is: " << money - debt;
}
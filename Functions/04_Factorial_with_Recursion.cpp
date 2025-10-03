#include <iostream>
using namespace std;

int fact(int);

int main (){

    int l;
    cout << "Please enter a number: ";
    cin >> l;

    cout << "The factorial of " << l << " is: " << fact(l);

}

int fact(int k){

    if (k == 1)
    {
        return 1;
    }
    else
    {
        return k * fact(k-1);
    }
    
}
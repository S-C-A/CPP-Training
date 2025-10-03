#include <iostream>
using namespace std;

int sumrec(int);

int main (){

    int l;
    cout << "Please enter a number: ";
    cin >> l;

    cout << "The sum of natural numbers from " << l << " is: " << sumrec(l);

}

int sumrec(int k){

    if (k == 1)
    {
        return 1;
    }
    else
    {
        return k + sumrec(k-1);
    }
    
}
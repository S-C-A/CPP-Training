#include <iostream>
using namespace std;

int pow(int, int);

int main (){

    int n, p;
    cout << "Please enter a number: ";
    cin >> n;
    cout << "Please enter its power: ";
    cin >> p;

    cout << n << " power " << p << " is: " << pow(n,p);

}

int pow(int k, int p){

    if (p == 0)
    {
        return 1;
    }
    else
    {
        return k * pow(k, p-1);
    }
    
}
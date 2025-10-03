#include <iostream>
using namespace std;

void prime(int, int);

int main(){

    int n, k;
    cout << "Enter the starting value: ";
    cin >> n;
    cout << "Enter the ending value : ";
    cin >> k;

    prime(n,k);

}

void prime(int x, int y){

    if (x < 3)
    {
        x = 3;
    }
    
    for (int i = x-1; i < y+1; i++)
    {
        int check = 1;
        for (int k = 2; k < i; k++)
        {
            if (i%k == 0)
            {
                check = 0;
            }
        }
        if (check == 1)
        {
            cout << i << " is prime.\n";
        }
    }
}
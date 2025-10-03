#include <iostream>
using namespace std;

void prime_check(int);

int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;

    prime_check(n);

}

void prime_check(int x){

    for (int i = 2; i < x; i++)
    {
        int check = 1;
        int confirm = 0;
        for (int k = 2; k < i; k++)
        {
            if (i%k == 0)
            {
                check = 0;
            }
        }
        if (check == 1)
        {
            confirm = 1;
            for (int t = 2; t < x-i; t++)
            {
                if ((x-1)%t == 0)
                {
                    confirm = 0;
                }
            }  
        }
        if (confirm == 1)
        {
            cout << x << " can be expressed as " << i << " + " << x-i;
            break;
        }
        
    }
}
#include <iostream>
using namespace std;

int main(){

    int str, end, none = 1;
    cout << "Enter the start and the end of the interval.\n";
    cin >> str >> end;

    if (str < 1)
    {
        str = 1;
    }


        for (int i = end-1; i > str ; i--)
        {
            int prime = 1;

            for (int k = i-1; k > 1; k--)
            {
                if (i%k == 0)
                {
                    prime = 0;
                }
            }

            if (prime == 1)
            {
                cout << i << " is a prime.\n";
                none = 0;
            }
            
            
        }
        
    if (none == 1)
    {
        cout << "There are no primes.";
    }
    
}
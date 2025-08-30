#include <iostream>
using namespace std;

int main(){

    int k, calc = 1, res = 0, digit = 0;

    for (int i = 1; i <= 1000; i++)
    {    
        digit = 0;
        res = 0;
        k = i;
        while(k > 0){

            digit++;
            k = k/10;
        }

        k = i;

        while (k > 0)
        {
            calc = 1;
            for (int u = 0; u < digit; u++)
            {
                calc = calc * (k%10);
            }
            
            res = res + calc;
            k = k/10;
        }

        if (res == i)
        {
            cout << i << " is an armstrong number.\n";
        }
        
    }

        

    
}
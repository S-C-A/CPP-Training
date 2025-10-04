#include <iostream>
using namespace std;

int main()
{
    int sum1 = 0, sum2 = 0;
    int a[][4] =   {{1, 2, 3, 4}, 
                    {5, 6, 7, 8}, 
                    {1, 2, 3, 4}, 
                    {8, 7, 6, 5}};

    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            if (i == k)
            {
                sum1 += a[i][k];
            }   
        }
    }
        
    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            if (i + k == 3)
            {
                sum2 += a[i][k];
            }   
        }
    }
    
    cout << "The sum of the first diagonal elements in the matrix is: " << sum1 << endl;
    cout << "The sum of the second diagonal elements in the matrix is: " << sum2;
}
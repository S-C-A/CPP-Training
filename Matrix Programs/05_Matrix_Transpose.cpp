#include <iostream>
using namespace std;

int main(){

    int A[4][4] = {{1, 1, 1, 1},
                   {2, 2, 2, 2},
                   {3, 3, 3, 3},
                   {4, 4, 4, 4}};

    for (int i = 0; i < 4; i++)
    {
        for (int k = i; k < 4; k++)
        {
            int temp = A[i][k];
            A[i][k] = A[k][i];
            A[k][i] = temp;
        }
        
    }
    

    for (int i = 0; i < 4; i++)
    {
        for (int k= 0; k < 4; k++)
        {
            cout << A[i][k] << " "; 
        }
        cout << endl;
    }

}
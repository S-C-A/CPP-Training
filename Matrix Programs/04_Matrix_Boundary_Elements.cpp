#include <iostream>
using namespace std;

int main(){

    int a[4][4] =   {{1, 2, 3, 4}, 
                     {5, 6, 7, 8}, 
                     {9, 2, 5, 1}, 
                     {6, 8, 4, 3}};

    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            if (i == 0 || i == 3 || k == 0 || k == 3)
            {
                cout << a[i][k] << " ";
            }
            else
            {
                cout << "  ";
            }
            
        }   
        cout << endl;
    }    
}
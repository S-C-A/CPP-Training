#include <iostream>
using namespace std;

int main(){

    int arr1[] = {7, 78, 14, 5, 26, 789};
    int arr2[] = {7, 88, 47, 26};

    for (int i = 0; i < 6; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            if (arr1[i] == arr2[k])
            {
                cout << arr1[i] << " is a common element.\n";
            }
            
        }   
    }
}
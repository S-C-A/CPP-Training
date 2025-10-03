#include <iostream>
using namespace std;

int main(){

    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4, 5, 5, 5};
    int n = 0, k = 0;

    for (int i = 1; i <= 11; i++)
    {
        if (arr[i] != arr[i-1])
        {
            n++;
        }
        
    }
    int arr_new[n];

    for (int i = 1; i <= 11; i++)
    {
        if (arr[i] != arr[i-1])
        {
            arr_new[k] = arr[i-1];
            k++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr_new[i] << endl;
    }
    
    


}
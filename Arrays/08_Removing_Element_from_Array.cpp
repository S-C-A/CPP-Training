#include <iostream>
using namespace std;

int main(){

    int arr[] = {1, 78, 47, 5, -8, 111};
    int check[6] = {0};
    int n = 0, k = 0, target;

    cout << "Enter removal target: ";
    cin >> target;

    for (int i = 0; i <= 5; i++)
    {
        if (arr[i] == target)
        {
            check[i] = 1; 
            n++;
        }
        
    }
    int arr_new[6-n];

    for (int i = 0; i <= 5; i++)
    {
        if (check[i] != 1)
        {
            arr_new[k] = arr[i];
            k++;
        }
    }

    for (int i = 0; i < 6-n; i++)
    {
        cout << arr_new[i] << endl;
    }
}
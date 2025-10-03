#include <iostream>
using namespace std;

int main(){

    int arr[] = {5, 78, -7, -59, 17};
    int min = arr[1], max = arr[1];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Smallest element in in the array is: " << min << endl
         << "Largest element in the array is: " << max;
}
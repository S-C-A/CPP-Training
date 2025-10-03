#include <iostream>
using namespace std;

int main(){

    int arr[] = {1, 2, 4, 3, 5};
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }

    cout << "The average of the elements in the array is: " << sum/5;
}
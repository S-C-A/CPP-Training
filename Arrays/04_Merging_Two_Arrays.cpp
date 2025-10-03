#include <iostream>
using namespace std;

int main() {
    int arr1[] = {3, 5, 7};
    int arr2[] = {2, 4, 6};
    int arr3[6];
    int n = 0, m = 0, k = 0;

    while (n < 3 && m < 3) {
        if (arr1[n] < arr2[m]) {

            arr3[k++] = arr1[n++];
        } else {

            arr3[k++] = arr2[m++];
        }
    }

    while (n < 3) 
    {
        arr3[k++] = arr1[n++];
    }

    while (m < 3) 
    {
        arr3[k++] = arr2[m++];
    }

    for (int i = 0; i < 6; i++) 
    {
        cout << arr3[i] << " ";
    }


    return 0;
}

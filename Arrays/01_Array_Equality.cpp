#include <iostream>
using namespace std;

int main(){

    int arr1[] = {1,2,3};
    int check = 1;

    int arr2[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Please enter the array element " << i+1 << ": ";
        cin >> arr2[i]; 
    }
    
    for (int i = 0; i < 3; i++)
    {
        if (arr1[i] != arr2[i])
        {
            check = 0;
            cout << "The arrays aren't the same!";
            break;
        }
        
    }

    if (check == 1)
    {
        cout << "The arrays are the same!";
    }
}
#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6};
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n>6)
    {
        n = n%6;
    }
    
    
    for (int i = n; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    


}
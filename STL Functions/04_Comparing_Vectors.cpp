#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v1 = {1,2,3};
    vector<int> v2 = {1,2,4};

    if(equal(v1.begin(),v1.end(),v2.begin())) cout << "Equal" << endl;
    else cout << "Not Equal" << endl;

    int arr[] = {1,2,3};
    int arr2[] = {1,5,3};

    if(equal(arr, arr+3, arr2)) cout << "Equal";
    else cout << "Not Equal";
}
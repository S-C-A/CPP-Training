#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v1 = {1,2,3};
    vector<int> v2 = {1,2,3};

    if(equal(v1.begin(),v1.end(),v2.begin())) cout << "Equal";
    else cout << "Not Equal";
}
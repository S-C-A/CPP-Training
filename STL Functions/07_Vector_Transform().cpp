#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v1 = {1,1,1,1};
    vector<int> v2(v1.size());

    int x = 2;

    transform(v1.begin(), v1.end(), v2.begin(), [&x](int a){
        x++;
        return a + x;
    });

    for (int n : v2)
    {
        cout << n << " ";
    }
}
#include <bits/stdc++.h>
using namespace std;

pair<int, int> minmax(int a, int b) {
    if (a < b) return {a, b};
    else return {b, a};
}

int main() {

    pair<int,int> p1 = {1,9};
    pair<int,int> p2 = {1,5};

    cout << p1.first << " " << p2.second << endl; 

    if (p1 > p2) cout << "p1 > p2" << endl;
    else cout << "p2 > p1" << endl;

    auto result = minmax(10, 3);
    cout << "Min: " << result.first << ", Max: " << result.second;
}

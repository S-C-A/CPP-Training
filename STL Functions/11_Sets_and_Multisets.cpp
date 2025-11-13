#include <bits/stdc++.h>
using namespace std;

int main(){

    set<int> s = {1,7,2,5,2};

    cout << "set" << endl;

    for (auto b : s) cout << b << " ";
    cout << endl;

    s.insert(9);
    s.insert(1);
    s.insert(6);

    for (auto b : s) cout << b << " ";
    cout << endl;

    multiset<int> m = {1,7,2,5,2};

    cout << "multisets" << endl;

    for (auto b : m) cout << b << " ";
    cout << endl;

    m.insert(9);
    m.insert(1);
    m.insert(6);

    for (auto b : m) cout << b << " ";
    cout << endl;

}
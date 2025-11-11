#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    stack<int> s;
    int k = v.size();

    for (int i = 1; i <= k; i++)
    {
        s.push(v.back());
        v.resize(k-i);
    }
    
    v.resize(k);

    for (int i = 1; i <= k; i++)
    {
        v[k-i] = s.top();
        s.pop();
    }
    
    for (int i : v){ cout << i << " ";
    }
    cout << endl;

    reverse(v.begin(), v.end());

    for (int i : v){ cout << i << " ";
    }

    
}

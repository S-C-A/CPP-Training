#include <bits/stdc++.h>
using namespace std;

int main() {

    map<string, int> scores;

    scores["Alice"]  = 90;
    scores["Bob"]    = 75;
    scores["Charlie"] = 88;

    cout << "Alice's score: " << scores["Alice"] << endl;

    if (scores.find("Bob") != scores.end())
        cout << "Bob is in the map\n";
    else
        cout << "Bob not found\n";

    scores.insert({"Michael", 85});

    cout << "\nAll students:\n";
    for (auto x : scores) {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}

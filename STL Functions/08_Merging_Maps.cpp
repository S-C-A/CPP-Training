#include <bits/stdc++.h>
using namespace std;

int main(){

    map<string, int> map1 = {{"Mike", 549}, {"Bob", 781}};
    map<string, int> map2 = {{"Rosie", 196}, {"Wendy", 848}};

    map1.insert(map2.begin(), map2.end());

    for (auto n : map1) cout << n.first << " " << n.second << endl;



}
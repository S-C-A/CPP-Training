#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<pair<string, int>> v = {
    {"Alice", 90},
    {"Bob", 75},
    {"Charlie", 88}};

    map<string, int> mymap;

    for (auto &p : v) {
        mymap.insert(p); 
    }

    for (auto n : mymap){
        cout << n.first << " " << n.second << endl;
    }
    

 

}
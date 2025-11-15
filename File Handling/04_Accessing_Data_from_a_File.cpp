#include <iostream>
#include <fstream>
#include <vector>
#include <set>
using namespace std;

int main(){

    ifstream file("Data.txt");
    vector<int> v;
    set<int> s;
    int x;

    while (file >> x) v.push_back(x);
    cout << "Vector: ";
    for (auto n : v) cout << n << " ";

    file.clear();
    file.seekg(0);

    while (file >> x) s.insert(x);
    cout << "\nSet: ";
    for (auto n : s) cout << n << " ";
}
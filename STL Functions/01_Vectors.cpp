#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int> test = {1};
    test.push_back(2);
    test.push_back(3);
    test.push_back(4);

    for (int n : test) cout << n << " ";
    cout << endl;

    test.pop_back();

    for (int n: test) cout << n << " ";
    cout << endl;

    test.resize(6);

    for (int n: test) cout << n << " ";
    cout << endl;

    test.resize(2);

    for (int n: test) cout << n << " ";
    cout << endl;

    test.resize(6);

    for (int n: test) cout << n << " ";
    cout << endl;

    test.erase(test.begin()); 
    cout << "After erase first element: ";
    for (int n : test) cout << n << " ";
    cout << "\n";

    test.push_back(7);
    test.push_back(2);
    sort(test.begin(), test.end());
    cout << "After sort: ";
    for (int n : test) cout << n << " ";    
    cout << "\n";

    cout << test.front() << endl;
    cout << test.back();
    
    return 0;
}  
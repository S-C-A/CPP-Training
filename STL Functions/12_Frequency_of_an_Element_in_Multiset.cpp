#include <iostream>
#include <set>
using namespace std;
int main()
{
    multiset<int> set = { 5, 2, 8, 5, 8 };

    int element = 8;

    int temp = 0;

    for (auto n : set ) if (n == element) temp++;
    cout << "Frequency of " << element
         << " in the multiset: " << temp << endl;


    int frequency = set.count(element);

    cout << "Frequency of " << element
         << " in the multiset: " << frequency << endl;

    return 0;
}
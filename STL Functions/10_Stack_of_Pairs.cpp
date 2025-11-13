#include <bits/stdc++.h>
using namespace std;

void printPair(pair<int, int> p)
{

    cout << "("
         << p.first << ", "
         << p.second << ") ";
}

void Showstack(stack<pair<int, int> > s)
{
    while (!s.empty()) {
        printPair(s.top());
        s.pop();
    }

    cout << '\n';
}

int main()
{
    stack<pair<int, int> > s;

    s.push({ 10, 20 });
    s.push({ 15, 5 });
    s.push({ 1, 5 });
    s.push({ 5, 10 });
    s.push({ 7, 9 });

    cout << "Stack of Pairs: ";
    Showstack(s);

    cout << "\nSize of Stack of Pairs: "
         << s.size();
    cout << "\nTop of Stack of Pairs: ";
    printPair(s.top());

    cout << "\n\nRemoving the top pair\n";
    s.pop();

    cout << "Current Stack of Pairs: ";
    Showstack(s);

    return 0;
}
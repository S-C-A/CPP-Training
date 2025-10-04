#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter Matrix Element\n";
    cin >> a >> b >> c >> d;

    int det = a*d - b*c;
    cout << "Determinant = " << det << endl;

    return 0;
}

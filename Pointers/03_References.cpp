#include <iostream>
using namespace std;

void modifyValue(int &x) {
  
    x = 20;  
}

int main() {
    int a[] = {10, 20};
    modifyValue(a[0]);
    
    cout << a[0];
    return 0;
}
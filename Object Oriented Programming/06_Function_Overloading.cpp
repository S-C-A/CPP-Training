#include <iostream>
using namespace std;

class sum{
public:
    int add(int a, int b){
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main(){

    sum n;
    cout << n.add(2,3) << endl;
    cout << n.add(2,3,5) << endl;
}
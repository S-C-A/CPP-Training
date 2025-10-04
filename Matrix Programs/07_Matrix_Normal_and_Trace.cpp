#include <iostream>
#include <cmath> 
using namespace std;

int main() {


    int A[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

    int trace = 0;
    double sumSquares = 0;

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (i == j)
                trace += A[i][j]; 
                sumSquares += A[i][j] * A[i][j]; 
        }
    }

    double normal = sqrt(sumSquares);

    cout << "Matrix A:\n";
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nTrace of the matrix = " << trace;
    cout << "\nNormal of the matrix = " << normal << endl;

    return 0;
}

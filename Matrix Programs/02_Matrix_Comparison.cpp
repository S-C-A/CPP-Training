#include <iostream>
using namespace std;


int areSame(int A[][4], int B[][4])
{
    int i, j;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            if (A[i][j] != B[i][j])
                return 0;
    return 1;
}

int main()
{
    int A[4][4] = {{1, 1, 1, 1},
                   {2, 2, 2, 2},
                   {3, 3, 3, 3},
                   {4, 4, 4, 4}};

    int B[4][4] = {{1, 1, 1, 1},
                   {2, 2, 2, 2},
                   {3, 3, 3, 3},
                   {4, 4, 4, 4}};

    if (areSame(A, B))
        cout << "Matrices are identical";
    else
        cout << "Matrices are not identical";
    return 0;
}
#include <iostream>
using namespace std;

int main(){

    int mat1[2][2] = {{1,5},{7,4}};
    int mat2[2][2] = {{9,3},{2,6}};

    for (int i = 0; i < 2; i++)
    {
        for (int k= 0; k < 2; k++)
        {
            cout << mat1[i][k] + mat2[i][k] << " "; 
        }
        cout << endl;
    }
    




}
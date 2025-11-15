#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ofstream file("Test.txt", ios::app);

    if (!file.is_open())
    {
        cout << "File couldn't be accessed";
    }
    
    file << "\nThis message is appended." << endl;
}
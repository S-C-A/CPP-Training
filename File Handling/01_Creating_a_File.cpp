#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ofstream file("Test.txt");

    if (!file)
    {
        cout << "File couldn't be created.";
    }
    
    file << "Testing filing." << endl;
    file << "Selamunaleykum file." << endl;

    file.close();
}
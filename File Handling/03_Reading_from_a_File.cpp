#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    ifstream file("Test.txt");

    if (!file.is_open())
    {
        cout << "File couldn't be opened.";
    }
    
    string line;

    while (getline(file, line)) {
        cout << line << endl;   
    }

}
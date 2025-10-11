#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    string no;
    string courses[3];
    int results[3];
    float GPA;
};

int main() {
    Student students[2]; 

    for (int i = 0; i < 2; i++) {
        cout << "\n--- Enter info for student " << i + 1 << " ---\n";

        cout << "Enter student's name: ";
        getline(cin, students[i].name);

        cout << "Enter student number: ";
        getline(cin, students[i].no);

        cout << "Enter 3 courses:\n";
        for (int j = 0; j < 3; j++) {
            cout << "  Course " << j + 1 << ": ";
            getline(cin, students[i].courses[j]);
        }

        cout << "Enter 3 results:\n";
        for (int j = 0; j < 3; j++) {
            string temp;
            cout << "  Result for " << students[i].courses[j] << ": ";
            getline(cin, temp);
            students[i].results[j] = stoi(temp); 
        }

        cout << "Enter GPA: ";
        string tempGPA;
        getline(cin, tempGPA);
        students[i].GPA = stof(tempGPA); 
    }

    cout << "\n=== Student List ===\n";
    for (int i = 0; i < 2; i++) {
        cout << "\nStudent " << i + 1 << "\n";
        cout << "Name: " << students[i].name << endl;
        cout << "Number: " << students[i].no << endl;
        cout << "GPA: " << students[i].GPA << endl;

        cout << "Courses and results:\n";
        for (int j = 0; j < 3; j++) {
            cout << "  " << students[i].courses[j] << " - " << students[i].results[j] << endl;
        }
    }

    return 0;
}

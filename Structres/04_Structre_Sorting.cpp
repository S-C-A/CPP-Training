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
    Student s1 = {"Alice", "1001", {"Math", "Science", "English"}, {85, 90, 88}, 3.7};
    Student s2 = {"Bob", "1002", {"Math", "Science", "English"}, {70, 75, 72}, 2.8};
    Student s3 = {"Charlie", "1003", {"Math", "Science", "English"}, {95, 92, 98}, 3.9};

    Student students[3] = {s1, s2, s3};
    students[0].GPA = 4.0;

    for (int i = 0; i < 3 - 1; i++) {
        for (int j = 0; j < 3 - i - 1; j++) {
            if (students[j].GPA < students[j + 1].GPA) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    cout << "Students sorted by GPA:\n";
    for (int i = 0; i < 3; i++) {
        cout << i+1 << ". " << students[i].name 
             << " (" << students[i].no << ") - GPA: " 
             << students[i].GPA << endl;
    }

    return 0;
}

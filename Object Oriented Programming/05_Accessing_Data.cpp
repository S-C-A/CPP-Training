    #include <iostream>
    using namespace std;

    class Employee {
    private:     

        double salary;
        int empID;

    public:                 
        string name; 
        
        Employee(string n, double s, int id) {
            name = n;
            salary = s;
            empID = id;
        }
    };

    int main() {
        Employee emp("Fedrick", 50000, 101);
        cout << "Name: " << emp.name << endl;
        return 0;
    }
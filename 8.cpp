#include <iostream>
using namespace std;

class Employee {
    int ID;
    string name;
    float salary;
public:
    void getEmployeeInfo() {
        cout << "Enter Employee ID: ";
        cin >> ID;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayEmployeeInfo() {
        cout << "ID: " << ID << ", Name: " << name << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee employees[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter details of Employee " << i + 1 << endl;
        employees[i].getEmployeeInfo();
    }

    cout << "Employee Information: " << endl;
    for (int i = 0; i < 3; i++) {
        employees[i].displayEmployeeInfo();
    }

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

// Base Class 1
class Person {
protected:
    string name;

public:
    Person(const string& n) : name(n) {}

    void setName(const string& n) { name = n; }
    string getName() const { return name; }
};

// Base Class 2
class Employee {
protected:
    int employeeID;

public:
    Employee(int id) : employeeID(id) {}

    void setEmployeeID(int id) { employeeID = id; }
    int getEmployeeID() const { return employeeID; }
};

// Derived Class
class Manager : public Person, public Employee {
private:
    string department;

public:
    Manager(const string& n, int id, const string& dep) : Person(n), Employee(id), department(dep) {}

    void setDepartment(const string& dep) { department = dep; }
    string getDepartment() const { return department; }

    void printDetails() const {
        cout << "Name: " << getName() << endl;
        cout << "Employee ID: " << getEmployeeID() << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager manager("afzal", 12345, "hod");
    manager.printDetails();
    
    return 0;
}

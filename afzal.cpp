#include <iostream>
#include <string>
using namespace std;

// Base class: Student
class Student {
protected:
    int studentNumber;
    string studentName;
    double studentAverage;

public:
    // Constructor with default values
    Student() : studentNumber(0), studentName(""), studentAverage(0.0) {}

    // Set functions
    void setStudentNumber(int num) { studentNumber = num; }
    void setStudentName(string name) { studentName = name; }
    void setStudentAverage(double avg) { studentAverage = avg; }

    // Get functions
    int getStudentNumber() const { return studentNumber; }
    string getStudentName() const { return studentName; }
    double getStudentAverage() const { return studentAverage; }

    // Print function
    void print() const {
        cout << "Student Number: " << studentNumber << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Student Average: " << studentAverage << endl;
    }
};

// Derived class: GraduateStudent
class GraduateStudent : public Student {
protected:
    int level;
    int year;

public:
    // Constructor
    GraduateStudent() : level(0), year(0) {}

    // Set functions
    void setLevel(int lvl) { level = lvl; }
    void setYear(int yr) { year = yr; }

    // Get functions
    int getLevel() const { return level; }
    int getYear() const { return year; }

    // Print function
    void print() const {
        Student::print(); // Call base class print function
        cout << "Level: " << level << endl;
        cout << "Year: " << year << endl;
    }
};

// Derived class: Master
class Master : public GraduateStudent {
private:
    int newID;

public:
    // Constructor
    Master() : newID(0) {}

    // Set function
    void setNewID(int id) { newID = id; }

    // Get function
    int getNewID() const { return newID; }

    // Print function
    void print() const {
        GraduateStudent::print(); // Call base class print function
        cout << "New ID: " << newID << endl;
    }
};

int main() {
    // Declare object of type Student
    Student studentObj;
    studentObj.setStudentNumber(123);
    studentObj.setStudentName("John Doe");
    studentObj.setStudentAverage(85.5);
    cout << "Student Information:" << endl;
    studentObj.print();
    cout << endl;

    // Declare object of type Master
    Master masterObj;
    masterObj.setStudentNumber(456); // Inherited from Student
    masterObj.setStudentName("Jane Smith"); // Inherited from Student
    masterObj.setStudentAverage(92.0); // Inherited from Student
    masterObj.setLevel(2);
    masterObj.setYear(2024);
    masterObj.setNewID(789);
    cout << "Master Information:" << endl;
    masterObj.print();

    return 0;
}

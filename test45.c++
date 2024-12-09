#include <iostream>
#include <string>

using namespace std;

struct studintinfo {
    string name_studint;
    int id_studint;
    string department_studint;
};

void inputinfo(studintinfo &student) {
    cout << "Enter the name of the student: ";
    cin >> student.name_studint;
    cout << "Enter the ID of the student: ";
    cin >> student.id_studint;
    cout << "Enter the department of the student: ";
    cin >> student.department_studint;
}

void outputinfo(const studintinfo &student) {
    cout << "Name of the student: " << student.name_studint << endl;
    cout << "ID of the student: " << student.id_studint << endl;
    cout << "Department of the student: " << student.department_studint << endl;
}

void inputinfoArray(studintinfo students[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "\nEntering information for student " << i + 1 << ":\n";
        inputinfo(students[i]);
    }
}

void outputinfoArray(const studintinfo students[], int size) {
    cout << "\nDisplaying student information:\n";
    for (int i = 0; i < size; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        outputinfo(students[i]);
    }
}

int main() {
    const int numStudents = 2;
    studintinfo students[numStudents];

    // Input information
    inputinfoArray(students, numStudents);

    // Output information
    outputinfoArray(students, numStudents);

    return 0;
}

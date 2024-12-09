#include <iostream>
#include <string>

using namespace std;

struct studintgrat {
    string name;
    int id;
    double grade;
};

void inputinfo(studintgrat &info) {
    cout << "Enter name: ";
    cin >> info.name;
    cout << "Enter id: ";
    cin >> info.id;
    cout << "Enter grade: ";
    cin >> info.grade;
}

void printinfo(const studintgrat &info) {
    cout << "Name: " << info.name << endl;
    cout << "ID: " << info.id << endl;
    cout << "Grade: " << info.grade << endl;
}

void inputinfoArray(studintgrat students[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "\nEnter student " << i + 1 << " info:" << endl;
        inputinfo(students[i]);
    }
}

int main() {
    const int maxStudents = 10; // الحد الأقصى لعدد الطلاب
    studintgrat students[maxStudents];

    int numStudents;
    cout << "Enter number of students (max " << maxStudents << "): ";
    cin >> numStudents;

    if (numStudents > maxStudents || numStudents <= 0) {
        cout << "Invalid number of students!" << endl;
        return 1;
    }

    // إدخال معلومات الطلاب
    inputinfoArray(students, numStudents);

    // طباعة معلومات جميع الطلاب
    cout << "\nAll students info:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        printinfo(students[i]);
    }

    return 0;
}

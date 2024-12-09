#include <iostream>
#include <string>

using namespace std;

// تعريف هيكل الطالب
struct student {
    string name;
    int age;
    double grade;
};

// دالة لتقييم الطالب
void marketstudent(student &market) {
    cout << "**********************************\n";
    cout << "\nنتيجة التقييم:\n";
    if (market.grade >= 85) {
        cout << market.name << " حصل على تقدير ممتاز!" << endl;
    } else if (market.grade >= 70) {
        cout << market.name << " حصل على تقدير جيد جداً." << endl;
    } else if (market.grade >= 50) {
        cout << market.name << " حصل على تقدير مقبول." << endl;
    } else {
        cout << market.name << " للأسف رسب." << endl;
    }
    cout << "**********************************\n";
}

// دالة لإدخال بيانات الطالب
void inputStudentInfo(student &student) {
    cout << "\nEnter student's name: ";
    cin >> student.name;
    cout << "Enter student's age: ";
    cin >> student.age;
    cout << "Enter student's grade: ";
    cin >> student.grade;
}

// دالة لعرض بيانات الطالب
void displayStudentInfo(student &student) {
    cout << "**********************************\n";
    cout << "Student's Name: " << student.name << endl;
    cout << "Student's Age: " << student.age << endl;
    cout << "Student's Grade: " << student.grade << endl;
    cout << "**********************************\n";
}

int main() {
    student student1, student2;

    // إدخال بيانات الطلاب
    inputStudentInfo(student1);
    inputStudentInfo(student2);

    // عرض بيانات الطلاب
    displayStudentInfo(student1);
    displayStudentInfo(student2);

    // تقييم الطلاب
    marketstudent(student1);
    marketstudent(student2);
    
    return 0;
}


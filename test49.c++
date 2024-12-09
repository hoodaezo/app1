#include <iostream>
#include <string>

using namespace std;


// تعريف struct لتخزين بيانات الطالب
struct Student {
    string name;  // اسم الطالب
    int age;      // عمر الطالب
    float grade;  // درجة الطالب
};

// دالة من نوع void لتقييم مستوى الطالب بناءً على درجته
void evaluateStudent(const Student& student) {
    cout << "\nنتيجة التقييم:\n";
    if (student.grade >= 85) {
        cout << student.name << " حصل على تقدير ممتاز!" << endl;
    } else if (student.grade >= 70) {
        cout << student.name << " حصل على تقدير جيد جداً." << endl;
    } else if (student.grade >= 50) {
        cout << student.name << " حصل على تقدير مقبول." << endl;
    } else {
        cout << student.name << " للأسف رسب." << endl;
    }
}

int main() {
    // إنشاء كائن من النوع Student
    Student student;

    // إدخال بيانات الطالب
    cout << "ادخل اسم الطالب: ";
    getline(cin, student.name);
    cout << "ادخل عمر الطالب: ";
    cin >> student.age;
    cout << "ادخل درجة الطالب (0 - 100): ";
    cin >> student.grade;

    // عرض بيانات الطالب
    cout << "\nبيانات الطالب:\n";
    cout << "الاسم: " << student.name << endl;
    cout << "العمر: " << student.age << endl;
    cout << "الدرجة: " << student.grade << endl;

    // استدعاء دالة تقييم الطالب
    evaluateStudent(student);

    return 0;
}

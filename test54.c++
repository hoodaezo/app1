#include <iostream>
#include <string>

using namespace std;

int main() {
    int grade;

    // طلب إدخال الدرجة
    cout << "Enter a number from 0 to 100: ";
    cin >> grade;

    // التحقق من صحة المدخلات
    if (grade < 0 || grade > 100) {
        cout << "Invalid grade! Please enter a number between 0 and 100." << endl;
    } else {
        // تحديد التقدير بناءً على الدرجة
        if (grade >= 90) {
            cout << "Grade: A" << endl;
            cout << "Excellent!" << endl;
        } else if (grade >= 80) {
            cout << "Grade: B" << endl;
            cout << "Very Good!" << endl;
        } else if (grade >= 70) {
            cout << "Grade: C" << endl;
            cout << "Good!" << endl;
        } else if (grade >= 60) {
            cout << "Grade: D" << endl;
            cout << "Passable!" << endl;
        } else if (grade >= 50) {
            cout << "Grade: E" << endl;
            cout << "Below Average!" << endl;
        } else {
            cout << "Grade: F" << endl;
            cout << "Fail. Better luck next time!" << endl;
        }
    }

    return 0;
}

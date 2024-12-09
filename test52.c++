#include <iostream>
#include <string>

using namespace std;

int main() {
    int grade;

    cout << "Enter your grade (0-100): ";
    cin >> grade;

    // التحقق من صحة المدخلات
    if (grade < 0 || grade > 100) {
        cout << "Invalid grade! Please enter a value between 0 and 100." << endl;
    } else {
        // تقييم الدرجة
        if (grade >= 90) {
           cout << "Your grade is Excellent: " << grade << endl;
            cout << "Keep up the outstanding performance!" << endl;
        } else if (grade >= 80) {
            cout << "Your grade is Good: " << grade << endl;
            cout << "Great job! You can aim for Excellent next time!" << endl;
        } else if (grade >= 70) {
            cout << "Your grade is Satisfactory: " << grade << endl;
            cout << "Good work, but there's room for improvement." << endl;
        } else if (grade >= 60) {
            cout << "Your grade is Average: " << grade << endl;
            cout << "Focus on understanding the concepts better." << endl;
        } else if (grade >= 50) {
            cout << "Your grade is Below Average: " << grade << endl;
            cout << "You passed, but you need to put in more effort." << endl;
        } else {
            cout << "Your grade is Poor: " << grade << endl;
            cout << "You need to work harder. Don't give up!" << endl;
        }
    }

    return 0;
}

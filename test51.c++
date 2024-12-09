#include <iostream>
#include <string>

using namespace std;

int main() {
    int grade;

    cout << "Enter your grade:\n";
    cin >> grade;

    if (grade >= 90) {
        cout << "Your grade is Excellent: " << grade << endl;
    } else if (grade >= 80) {
        cout << "Your grade is Good: " << grade << endl;
    } else if (grade >= 70) {
        cout << "Your grade is Satisfactory: " << grade << endl;
    } else if (grade >= 60) {
        cout << "Your grade is Average: " << grade << endl;
    } else if (grade >= 50) {
        cout << "Your grade is Below Average: " << grade << endl;
    } else {
        cout << "Your grade is Poor: " << grade << endl;
    }

    return 0;
}


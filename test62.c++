#include <iostream>
using namespace std;

// دالة لعرض قائمة الخيارات
void displayMenu() {
    cout << "Choose an operation:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "Enter your choice: ";
}

// دالة لجمع رقمين
int add(int num1, int num2) {
    return num1 + num2;
}

// دالة لطرح رقمين
int subtract(int num1, int num2) {
    return num1 - num2;
}

// دالة لضرب رقمين
int multiply(int num1, int num2) {
    return num1 * num2;
}

// دالة لقسمة رقمين
float divide(int num1, int num2) {
    if (num2 == 0) {
        cout << "Error: Cannot divide by zero.\n";
        return 0; // ترجع 0 في حالة القسمة على الصفر
    }
    return static_cast<float>(num1) / num2;
}

int main() {
    int choice, num1, num2;

    // عرض القائمة
    displayMenu();
    cin >> choice;

    // إدخال الرقمين
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // تنفيذ العملية بناءً على اختيار المستخدم
    switch (choice) {
        case 1:
            cout << "The result is: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "The result is: " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "The result is: " << multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "The result is: " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice!\n";
    }

    return 0;
}

#include <iostream>
using namespace std;

// دالة للجمع
int add(int a, int b) {
    return a + b;
}

// دالة للطرح
int subtract(int a, int b) {
    return a - b;
}

// دالة للضرب
int multiply(int a, int b) {
    return a * b;
}

// دالة للقسمة
double divide(int a, int b) {
    if (b != 0)
        return static_cast<double>(a) / b;  // تحويل إلى double لتفادي القسمة الصحيحة
    else {
        cout << "القسمة على صفر غير مسموحة!" << endl;
        return 0;
    }
}

int main() {
    int num1, num2;
    cout << "ادخل الرقم الأول: ";
    cin >> num1;
    cout << "ادخل الرقم الثاني: ";
    cin >> num2;

    // استدعاء الدوال
    int sum = add(num1, num2);
    int diff = subtract(num1, num2);
    int product = multiply(num1, num2);
    double quotient = divide(num1, num2);

    // طباعة النتائج
    cout << "المجموع: " << sum << endl;
    cout << "الطرح: " << diff << endl;
    cout << "الضرب: " << product << endl;
    cout << "القسمة: " << quotient << endl;

    return 0;
}

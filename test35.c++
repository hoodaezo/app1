#include <iostream>
#include <string>
using namespace std;

int main() {
    // تعريف المصفوفات
    int y[5] = {10, 88, 99, 6, 44};
    int x[5] = {10, 88, 99, 6, 44};
    string name[3] = {"hooda", "ahmed", "ez"};

    cout << "\n*********************************************\n";

    // استخدام to_string لتحويل الأعداد إلى نصوص
    cout << name[0] + to_string(x[2]) << endl;
    cout << name[1] + to_string(y[4]) << endl;
    cout << name[2] + to_string(y[0]) << endl;
    cout << name[0] + to_string(y[1]) + to_string(y[2]) + to_string(y[3]) + to_string(y[4]) << endl;
    cout << name[1] + to_string(x[0]) + to_string(x[1]) + to_string(x[2]) + to_string(x[3]) + to_string(x[4]) << endl;
    cout << name[2] + to_string(x[0]) + to_string(x[1]) + to_string(x[3]) << endl;

    cout << "\n*********************************************\n";
    cout << "\n*********************************************\n";

    // عرض الأسماء
    cout << name[0] << endl;
    cout << name[1] << endl;
    cout << name[2] << endl;

    cout << "\n*********************************************\n";
    cout << "\n*********************************************\n";

    // حساب مجموع عناصر x
    int sum_x = 0;
    for (int i = 0; i < 5; i++) {
        sum_x += x[i];
    }
    cout << "\n*********************************************\n";


    cout << sum_x << endl;

    cout << "\n*********************************************\n";

    // عرض عناصر y
    for (int i = 0; i < 5; i++) {
        cout << y[i] << endl;
    }

    // حساب مجموع عناصر y
    int sum_y = 0;
    for (int i = 0; i < 5; i++) {
        sum_y += y[i];
    }

    cout << "\n*********************************************\n";
    
    cout << sum_y << endl;

    cout << "\n*********************************************\n";

    return 0;
}

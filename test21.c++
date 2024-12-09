#include <iostream>
#include <string>

using namespace std;

int main() {
    // تعريف المتغيرات
    string s1 = "43.22";
    string s3 = "abc";
    int n1 = 20;
    int n2 = 0;
    double d1 = 3.14;
    double d2 = 0.0;
    float f1 = 55.23f; 
    float f2 = 0.0f;

    // تحويل النص إلى double
    try {
        double num1 = stod(s1);
        cout << "Converted s1 to double: " << num1 << endl;
    } catch (const invalid_argument& e) {
        cout << "Error: Cannot convert s1 to double." << endl;
    }

    try {
        double num2 = stod(s3); // محاولة تحويل نص غير رقمي
        cout << "Converted s3 to double: " << num2 << endl;
    } catch (const invalid_argument& e) {
        cout << "Error: Cannot convert s3 to double." << endl;
    }

    // تحويل int إلى string
    string str1 = to_string(n1);
    string str2 = to_string(n2);
    cout << "Converted n1 to string: " << str1 << endl;
    cout << "Converted n2 to string: " << str2 << endl;

    // تحويل double إلى float
    float f3 = static_cast<float>(d1);
    float f4 = static_cast<float>(d2);
    cout << "Converted d1 to float: " << f3 << endl;
    cout << "Converted d2 to float: " << f4 << endl;

    // تحويل float إلى double
    double d3 = static_cast<double>(f1);
    double d4 = static_cast<double>(f2);
    cout << "Converted f1 to double: " << d3 << endl;
    cout << "Converted f2 to double: " << d4 << endl;

    return 0;
}

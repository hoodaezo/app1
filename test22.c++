#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "43.22";  // نص صالح للتحويل
    string s3 = "abc";    // نص غير صالح للتحويل
    int n2 = 0;           // عدد صحيح
    double d2 = 0.0;      // رقم عشري
    float f2 = 0.0f;      // رقم عشري (float)

    try {
        // تحويل النص s1 إلى double
        double num1 = stod(s1);
        cout << "Converted s1 to double: " << num1 << endl;
    } catch (const invalid_argument &e) {
        cout << "Error: Cannot convert s1 to double." << endl;
    }

    try {
        // محاولة تحويل النص s3 إلى double (نص غير صالح)
        double num2 = stod(s3);
        cout << "Converted s3 to double: " << num2 << endl;
    } catch (const invalid_argument &e) {
        cout << "Error: Cannot convert s3 to double." << endl;
    }

    // تحويل n2 (int) إلى string
    string str1 = to_string(n2);
    cout << "Converted n2 to string: " << str1 << endl;

    // تحويل d2 (double) إلى float
    float num3 = static_cast<float>(d2);
    cout << "Converted d2 to float: " << num3 << endl;

    // تحويل f2 (float) إلى double
    double num4 = static_cast<double>(f2);
    cout << "Converted f2 to double: " << num4 << endl;

    // تحويل f2 (float) إلى string
    string str2 = to_string(f2);
    cout << "Converted f2 to string: " << str2 << endl;

    return 0;
}

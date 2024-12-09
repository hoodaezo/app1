#include <iostream>
#include <string> // لإضافة مكتبة التعامل مع النصوص
using namespace std;

int main()
{
    string name;  
    cout << "Enter your name: " << endl;
    getline(cin, name);
    cout << "Your name is: " << name << endl; 
    
    // حساب طول النص
    cout << "The length of the string: " << name.length() << endl;

    // الحصول على الحرف الأول من النص
    if (!name.empty()) { // التأكد أن النص غير فارغ لتجنب الأخطاء
        cout << "The first character of the string: " << name[0] << endl; // أول حرف يكون في الفهرس 0
    }

    // الحصول على الحرف الأخير من النص
    if (!name.empty()) { // التأكد أن النص غير فارغ لتجنب الأخطاء
        cout << "The last character of the string: " << name[name.length() - 1] << endl; // آخر حرف في النص
    }

    // التعامل مع النصوص الرقمية
    string s = "5", s1 = "10";
    string s3 = s + s1; // دمج النصوص
    cout << "Concatenated string: " << s3 << endl;

    // تحويل النصوص إلى أرقام وجمعها
    int sum = stoi(s) + stoi(s1); // استخدام stoi لتحويل النصوص إلى أرقام صحيحة
    cout << "Sum of the numbers: " << sum << endl;

    return 0;
}



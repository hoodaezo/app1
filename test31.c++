#include <iostream>
using namespace std;

// تعريف متغيرات عامة
string frist_name = "hoodaezo";
string addres = "alexcandrya";

// تعريف دالة لطباعة بيانات الشخص
void person_id() {
    cout << "Your name is Mahmoud Ahmed" << endl;
    cout << "Your address is Tahir Street" << endl;
}

// تعريف دالة ترجع اسم وعنوان الشخص
string personid() {
    string Frist_Name = "Eldood";
    string Addres = "Elamrya St";
    return "First Name: " + Frist_Name + ", Address: " + Addres;
}

int main() {
    // طباعة المتغيرات العامة
    cout << "First Name (global): " << frist_name << endl;
    cout << "Address (global): " << addres << endl;

    // استدعاء الدالة person_id
    person_id();

    // طباعة البيانات المرجعة من الدالة personid
    cout << "Details (local): " << personid() << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

// تعريف هيكل الشخص
struct stperson {
    string firstname;
    string lastname;
    string address;
    int age;
};

// تعريف هيكل الهاتف
struct stphone {
    string number;
    string type;
};

// تعريف هيكل العنوان
struct staddress {
    string street;
    string city;
    string state;
    stphone phone; // الهاتف مرتبط بالعنوان
};

// تعريف هيكل رئيسي يربط بين الشخص والعنوان والهاتف
struct stprofile {
    stperson person;
    staddress address;
};

int main() {
    // إنشاء كائن من نوع stprofile
    stprofile profile;

    // إضافة بيانات الشخص
    profile.person.firstname = "Hoodaez";
    profile.person.lastname = "Ahmed";
    profile.person.address = "Alexandria";
    profile.person.age = 35;

    // إضافة بيانات الهاتف
    profile.address.phone.number = "0123456789";
    profile.address.phone.type = "Home";

    // إضافة بيانات العنوان
    profile.address.street = "Tahrir Street";
    profile.address.city = "Alexandria";
    profile.address.state = "Egypt";

    // طباعة البيانات
    cout << "Name: " << profile.person.firstname << " " << profile.person.lastname << endl;
    cout << "Address: " << profile.address.street << ", " << profile.address.city << ", " << profile.address.state << endl;
    cout << "Phone Number: " << profile.address.phone.number << " (Type: " << profile.address.phone.type << ")" << endl;
    cout << "Age: " << profile.person.age << endl;

    return 0;
}


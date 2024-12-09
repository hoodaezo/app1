#include <iostream>
using namespace std;

// تعريف الأنواع enum
enum encolor { red, white, black };
enum engender { male, female };
enum enmarried { yes, no };

// تعريف هيكل العنوان
struct staddress {
    string streetname;
    string city;
    int housenumber;
};

// تعريف هيكل الاتصال
struct stcontact {
    string phonenumber;
    string email;
    staddress address;
};

// تعريف هيكل الشخص
struct stperson {
    string name;
    string lastname;
    int age;
    encolor favoritecolor;
    engender gender;
    enmarried married;
    stcontact contactinfo;
};

int main() {
    stperson person;

    // ملء بيانات الشخص
    person.name = "Hoodaez";
    person.lastname = "Ahmed";
    person.age = 35;
    person.favoritecolor = black; // اختيار اللون المفضل
    person.gender = male;         // اختيار النوع
    person.married = yes;         // الحالة الاجتماعية

    // ملء بيانات الاتصال
    person.contactinfo.phonenumber = "0123456789";
    person.contactinfo.email = "hoodaez@example.com";
    person.contactinfo.address.streetname = "Tahrir Street";
    person.contactinfo.address.city = "Alexandria";
    person.contactinfo.address.housenumber = 123;

    // طباعة بيانات الشخص
    cout << "Name: " << person.name << " " << person.lastname << endl;
    cout << "Age: " << person.age << endl;
    cout << "Favorite Color: "
         << (person.favoritecolor == red ? "Red" :
             (person.favoritecolor == white ? "White" : "Black"))
         << endl;
    cout << "Gender: " << (person.gender == male ? "Male" : "Female") << endl;
    cout << "Married: " << (person.married == yes ? "Yes" : "No") << endl;
    cout << "Phone Number: " << person.contactinfo.phonenumber << endl;
    cout << "Email: " << person.contactinfo.email << endl;
    cout << "Address: " << person.contactinfo.address.streetname << ", "
         << person.contactinfo.address.city << ", "
         << person.contactinfo.address.housenumber << endl;

    return 0;
}

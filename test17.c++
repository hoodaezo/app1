#include <iostream>
#include <string>
using namespace std;

// تعريف enumerations
enum enColor { red, black, white };
enum enGender { male, female };

// تعريف struct العنوان
struct stAddress {
    string strStreet;
    int intHouseNumber;
};

// تعريف struct معلومات الاتصال
struct stContactInfo {
    string phone;
    string email;
    stAddress address; // إضافة العنوان كحقل داخل معلومات الاتصال
};

// تعريف struct الشخص
struct stPerson {
    string name;
    int age;
    enGender gender;
    enColor favoriteColor;
    stContactInfo contactInfo; // معلومات الاتصال كحقل داخل الشخص
};

int main() {
    // إنشاء كائن من النوع stPerson
    stPerson person;

    // تعبئة بيانات الشخص
    person.name = "Mahmoud";
    person.age = 30;
    person.gender = male;
    person.favoriteColor = black;
    person.contactInfo.phone = "0123456789";
    person.contactInfo.email = "mahmoud@example.com";
    person.contactInfo.address.strStreet = "Tahrir Street";
    person.contactInfo.address.intHouseNumber = 15;

    // طباعة البيانات
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Gender: " << (person.gender == male ? "Male" : "Female") << endl;
    cout << "Favorite Color: " << (person.favoriteColor == red ? "Red" :
                                    person.favoriteColor == black ? "Black" : "White") << endl;
    cout << "Phone: " << person.contactInfo.phone << endl;
    cout << "Email: " << person.contactInfo.email << endl;
    cout << "Address: " << person.contactInfo.address.strStreet
         << ", House No. " << person.contactInfo.address.intHouseNumber << endl;

    return 0;
}

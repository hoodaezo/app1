#include <iostream>
#include <string>

using namespace std;

// تعريف الهيكل
struct PersonInfo {
    string name;
    int age;
    char gender;
    double gpa;
    bool isStudent;
    string address;
};

// دالة لقراءة المعلومات
void readInfo(PersonInfo &info) {
    cout << "Enter your name: ";
    cin.ignore(); // لتجنب مشكلة مع cin و getline
    getline(cin, info.name);

    cout << "Enter your age: ";
    cin >> info.age;

    cout << "Enter your gender (M/F): ";
    cin >> info.gender;

    cout << "Enter your GPA: ";
    cin >> info.gpa;

    cout << "Are you a student? (1 for yes, 0 for no): ";
    cin >> info.isStudent;

    cout << "Enter your address: ";
    cin.ignore(); // لتجنب مشكلة مع cin و getline
    getline(cin, info.address);
}

// دالة لطباعة المعلومات
void printInfo(const PersonInfo &info) {
    cout << "\n*************************************************\n";
    cout << "Your name is: " << info.name << endl;
    cout << "Your age is: " << info.age << endl;
    cout << "Your gender is: " << info.gender << endl;
    cout << "Your GPA is: " << info.gpa << endl;
    cout << "Are you a student? " << (info.isStudent ? "Yes" : "No") << endl;
    cout << "Your address is: " << info.address << endl;
    cout << "*************************************************\n";
}

int main() {
    PersonInfo person; // إنشاء كائن من النوع PersonInfo

    readInfo(person);  // قراءة المعلومات
    printInfo(person); // طباعة المعلومات

    return 0;
}

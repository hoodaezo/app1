#include <iostream>
#include <string>

using namespace std;

struct personinfo // تصحيح اسم الهيكل
{
    string name;
    int age;
    char gender;
};

void readinfo(personinfo &info) // تمرير بالمرجع
{
    cout << "Enter name: ";
    cin.ignore(); // تصحيح الخطأ المطبعي
    getline(cin, info.name);

    cout << "Enter age: ";
    cin >> info.age;

    cout << "Enter gender (M/F): ";
    cin >> info.gender;
}

void printinfo(const personinfo &info) // تمرير بالمرجع للقراءة فقط
{
    cout << "\n*************************************************\n";
    cout << "Your name is: " << info.name << endl;
    cout << "Your age is: " << info.age << endl;
    cout << "Your gender is: " << info.gender << endl;
    cout << "\n******************************************************\n";
}

int main()
{
    personinfo person; // تصحيح اسم الهيكل

    readinfo(person);  // استدعاء صحيح للدالة

    printinfo(person); // استدعاء صحيح للدالة

    return 0;
}

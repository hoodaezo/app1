#include <iostream>
#include <string>

using namespace std;

// تعريف enum للأيام
enum enWeekdays { sat = 1, sun, mon, tue, wed, thu, fri };

// دالة لعرض قائمة الأيام
void voShowWeekday() {
    cout << "*********************************" << endl;
    cout << "            Week Days            " << endl;
    cout << "*********************************" << endl;
    cout << "            1. Sat               " << endl;
    cout << "            2. Sun               " << endl;
    cout << "            3. Mon               " << endl;
    cout << "            4. Tue               " << endl;
    cout << "            5. Wed               " << endl;
    cout << "            6. Thu               " << endl;
    cout << "            7. Fri               " << endl;
    cout << "*********************************" << endl;
    cout << "   Please enter the number of the day: ";
}

// دالة لقراءة اليوم المدخل
enWeekdays enReadWeekday() {
    int weekday;
    cin >> weekday;

    // التحقق من صحة الإدخال
    if (weekday >= 1 && weekday <= 7)
        return static_cast<enWeekdays>(weekday);
    else
        return static_cast<enWeekdays>(0); // قيمة غير صالحة
}

// دالة لتحويل اليوم إلى نص
string getWeekday(enWeekdays weekday) {
    switch (weekday) {
        case enWeekdays::sat:
            return "Saturday";
        case enWeekdays::sun:
            return "Sunday";
        case enWeekdays::mon:
            return "Monday";
        case enWeekdays::tue:
            return "Tuesday";
        case enWeekdays::wed:
            return "Wednesday";
        case enWeekdays::thu:
            return "Thursday";
        case enWeekdays::fri:
            return "Friday";
        default:
            return "Invalid day!";
    }
}

// الدالة الرئيسية
int main() {
    voShowWeekday(); // عرض القائمة

    enWeekdays chosenDay = enReadWeekday(); // قراءة اليوم من المستخدم

    // طباعة اليوم النصي
    cout << "The chosen day is: " << getWeekday(chosenDay) << endl;

    return 0;
}

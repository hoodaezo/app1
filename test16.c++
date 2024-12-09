#include <iostream>
using namespace std;

// تعريف أيام الأسبوع
enum week {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

// تعريف الأيام
enum day {
    FIRST,
    SECOND,
    THIRD,
    FOURTH,
    FIFTH,
    SIXTH,
    SEVENTH
};

int main() {
    // تعريف متغير من النوع week وتعيينه
    week myWeek = SATURDAY  ;
    week myweek=THURSDAY;

    // تعريف متغير من النوع day وتعيينه
    day myDay = SECOND ;
     day mydat= SIXTH;
    // عرض القيم    
    cout << "My week: " << myWeek << endl; // سيعرض القيمة الكلمية لـ SATURDAY
    cout << "My day: " << myDay << endl;      // سيعرض القيمة الكلمية لـ SIX
    cout<< "myweek :" << myweek<<endl;
    cout<<"myday :"<<myDay<<endl;


    


    return 0;
}


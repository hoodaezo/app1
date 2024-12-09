#include <iostream>
#include <string>

using namespace std;

// تعريف الدالة personinfo
string personinfo(int person1, int person2, int person3) {
    string info = "Person 1: " + to_string(person1) + "\n";
    info += "Person 2: " + to_string(person2) + "\n";
    info += "Person 3: " + (person3 == 0 ? "No" : to_string(person3)); // إذا كان person3 يساوي 0، يتم كتابة "No"
    return info;
}

int main() { 
    int person1 = 30;
    int person2 = 25;
    int person3 = 0;

    // استدعاء الدالة وطباعة النتيجة
    cout << personinfo(person1, person2, person3) << endl;

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

struct carinfo {
    string make;
    string model;
    int year;
};

// إدخال بيانات سيارة واحدة
void inputdata(carinfo &data) {
    cout << "Enter make: ";
    cin >> data.make;
    cout << "Enter model: ";
    cin >> data.model;
    cout << "Enter year: ";
    cin >> data.year;
}

// طباعة بيانات سيارة واحدة
void outputdata(const carinfo &data) {
    cout << "Make: " << data.make << endl;
    cout << "Model: " << data.model << endl;
    cout << "Year: " << data.year << endl;
}

// إدخال بيانات مصفوفة السيارات
void inputdata(carinfo cars[2]) {
   
    inputdata(cars[0]);
    inputdata(cars[0]);
}

// طباعة بيانات مصفوفة السيارات
void outputdata( carinfo cars[2]) {
    outputdata(cars[1]);
    outputdata(cars[1]);
    

}
int main() {
    Carsinfo [2]; // عدد السيارات
    

    // إدخال البيانات
    inputdata(cars);

    // طباعة البيانات
    outputdata(cars);

    return 0;
}


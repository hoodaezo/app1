#include <iostream>
#include <string>

using namespace std;

struct studintinfo
{
string namestudint;
    int idstudint;
    double gradestudint;
    string classstudint;
    string addressstudint;
    string phonestudint;
    bool isgraduatestudint;
};

void inputInfo(studintinfo& student )
{   cout<<"\n********************************\n";
    cout << "Enter student name: ";
    cin >> student.namestudint;
    cout << "Enter student ID: ";
    cin >> student.idstudint;
    cout << "Enter student grade: ";
    cin >> student.gradestudint;
    cout << "Enter student class: ";
    cin >> student.classstudint;
    cout << "Enter student address: ";
    cin >> student.addressstudint;
    cout << "Enter student phone: ";
    cin >> student.phonestudint;
    cout << "Is the student graduated? (true/false): ";
    cin >> student.isgraduatestudint;
}

void printInfo( studintinfo& student)
{  cout<<"\n********************************\n";
    cout << "\nStudent Information:" << endl;
    cout << "Name: " << student.namestudint << endl;
    cout << "ID: " << student.idstudint << endl;
    cout << "Grade: " << student.gradestudint << endl;
    cout << "Class: " << student.classstudint << endl;
    cout << "Address: " << student.addressstudint << endl;
    cout << "Phone: " << student.phonestudint << endl;
    cout << "Is Graduated: " << (student.isgraduatestudint? "Yes" : "No") << endl;
}

void inputinfo(studintinfo student[2] )
{
    inputinfo (student[0]);
    inputinfo(student[1]);
}

void printstuodintinfo(studintinfo student[2])
{
    printInfo (student[0]);
    printInfo (student[1]);




}
int main(){
    studintinfo student[2];
    inputInfo(student);
    printInfo(student);
    return 0;
}
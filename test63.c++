#include <iostream>
#include <string>

using namespace std;

double calculataverage(double grades [0] ,int count   )
{ 
    double sum = 0;           //ا    لمجموعa    verage متوسط
   // int count = 0;          //العدد 
    //double grades;         //الدرجات
    for (int i = 0; i < count; i++)
    {
        sum += grades [i];
    }
    return  sum/count;
}
string getgrade(double average)

{if (average>=90)
    return "A";
    else if (average>=80)
    return "B";
    else if (average>=70)
    return "C";
    else if (average>=60)
    return "D";
    else if (average>=50)
    return "F";

    else
    return "Fail";

}

   int  main()
{   
    int numstudents;
    cout << "Enter the number of students: ";
    cin >> numstudents;
    double grades [numstudents];
    for (int i = 0; i < numstudents; i++)
    {
        cout << "Enter grade for student " << i + 1 << ": ";
        cin >> grades [i];
    }

    double average = calculataverage(grades, numstudents);
    string grade = getgrade(average);

    cout << "Average grade: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
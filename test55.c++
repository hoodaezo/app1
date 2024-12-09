#include <iostream>
#include <fstream>
#include <vector>
#include <limits>

using namespace std;

// دالة لتحديد التقدير بناءً على الدرجة
string getGrade(int grade)
{
    if (grade >= 90)
        return "A (Excellent)";
    if (grade >= 80)
        return "B (Very Good)";
    if (grade >= 70)
        return "C (Good)";
    if (grade >= 60)
        return "D (Passable)";
    if (grade >= 50)
        return "E (Below Average)";
    return "F (Fail)";
}

// دالة لحساب الإحصائيات
void calculateStatistics(const vector<int> &grades)
{
    if (grades.empty())
    {
        cout << "No grades entered yet!" << endl;
        return;
    }

    int total = 0, maxGrade = 0, minGrade = 100;

    for (int grade : grades)
    {
        total += grade;
        if (grade > maxGrade)
            maxGrade = grade;
        if (grade < minGrade)
            minGrade = grade;
    }

    cout << "\nStatistics:\n";
    cout << "Total students: " << grades.size() << endl;
    cout << "Average grade: " << (total / grades.size()) << endl;
    cout << "Highest grade: " << maxGrade << endl;
    cout << "Lowest grade: " << minGrade << endl;
}

// دالة لحفظ الدرجات إلى ملف
void saveGradesToFile(const vector<int> &grades, const string &filename)
{
    ofstream file(filename);
    if (!file)
    {
        cout << "Error opening file for writing!" << endl;
        return;
    }

    for (size_t i = 0; i < grades.size(); ++i)
    {
        file << "Student " << (i + 1) << ": Grade = " << grades[i] << ", " << getGrade(grades[i]) << endl;
    }

    cout << "Grades saved to file: " << filename << endl;
    file.close();
}

// دالة لتحميل الدرجات من ملف
void loadGradesFromFile(vector<int> &grades, const string &filename)
{
    ifstream file(filename);
    if (!file)
    {
        cout << "Error opening file for reading!" << endl;
        return;
    }

    int grade;
    while (file >> grade)
    {
        grades.push_back(grade);
    }

    cout << "Grades loaded from file: " << filename << endl;
    file.close();
}

int main()
{
    vector<int> grades;
    int choice;

    do
    {
        cout << "\nGrade Management System\n";
        cout << "1. Enter a new grade\n";
        cout << "2. View all grades\n";
        cout << "3. Calculate statistics\n";
        cout << "4. Save grades to file\n";
        cout << "5. Load grades from file\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int grade;
            cout << "Enter grade (0-100): ";
            cin >> grade;

            while (cin.fail() || grade < 0 || grade > 100)
            {
                cout << "Invalid input! Please enter a number between 0 and 100: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin >> grade;
            }

            grades.push_back(grade);
            cout << "Grade added successfully!" << endl;
            break;
        }
        case 2:
            if (grades.empty())
            {
                cout << "No grades entered yet!" << endl;
            }
            else
            {
                cout << "\nGrades:\n";
                for (size_t i = 0; i < grades.size(); ++i)
                {
                    cout << "Student " << (i + 1) << ": Grade = " << grades[i]
                         << ", " << getGrade(grades[i]) << endl;
                }
            }
            break;
        case 3:
            calculateStatistics(grades);
            break;
        case 4:
        {
            string filename;
            cout << "Enter filename to save grades: ";
            cin >> filename;
            saveGradesToFile(grades, filename);
            break;
        }
        case 5:
        {
            string filename;
            cout << "Enter filename to load grades: ";
            cin >> filename;
            loadGradesFromFile(grades, filename);
            break;
        }
        case 6:
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}

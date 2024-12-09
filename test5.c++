#include <iostream>
using namespace std;

int main()
{
    int grade;
    cout << "Enter your grade (0-100): ";
    cin >> grade;

    if (grade < 0 || grade > 100)
    {
        cout << "Invalid grade. Please enter a value between 0 and 100." << endl;
    }
    else if (grade >= 50)
    {
        cout << "Congratulations! You passed." << endl;
    }
    else
    {
        cout << "Sorry, you failed." << endl;
    }

    return 0;
}

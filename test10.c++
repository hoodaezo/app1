#include <iostream>
#include <limits>
using namespace std;

int main()
{
    char oper;
    float num1, num2;

    // Get operator input
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;

    // Validate operator input
    if (oper != '+' && oper != '-' && oper != '*' && oper != '/')
    {
        cout << "Error: Invalid operator!" << endl;
        return 1; // Exit program with error code
    }

    // Get two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    // Check if input for first number is valid
    if (cin.fail())
    {
        cout << "Error: Invalid input for the first number!" << endl;
        return 1;
    }

    cout << "Enter the second number: ";
    cin >> num2;

    // Check if input for second number is valid
    if (cin.fail())
    {
        cout << "Error: Invalid input for the second number!" << endl;
        return 1;
    }

    // Perform the operation based on the operator
    if (oper == '+')
    {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }
    else if (oper == '-')
    {
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    }
    else if (oper == '*')
    {
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    }
    else if (oper == '/')
    {
        // Check for division by zero
        if (num2 == 0)
        {
            cout << "Error: Division by zero is not allowed!" << endl;
        }
        else
        {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
    }

    return 0; // Exit program successfully
}

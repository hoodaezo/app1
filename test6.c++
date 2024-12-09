#include <iostream>
using namespace std;
int main()
{
    char oper;
    float num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> oper;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (oper)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0)
        {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        else
        {
            cout << "Error: Division by zero" << endl;
        }
        break;
    default:
        cout << "Error: Invalid operator" << endl;
    }

    return 0;
}

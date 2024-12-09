#include <iostream>
#include <string>

using namespace std;

int main()
{
    char opretor;
    double number1, number2;

    cout << "Enter number 1: ";
    cin >> number1;

    cout << "Enter number 2: ";
    cin >> number2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> opretor;

    switch (opretor)
    {
    case '+':
        cout << "number1 + number2 = " << (number1 + number2) << endl;
        break;

    case '-':
        cout << "number1 - number2 = " << (number1 - number2) << endl;
        break;

    case '*':
        cout << "number1 * number2 = " << (number1 * number2) << endl;
        break;

    case '/':
        if (number2 != 0)
            cout << "number1 / number2 = " << (number1 / number2) << endl;
        else
            cout << "Error! Division by zero" << endl;
        break;

    default:
        cout << "Error! Invalid operator" << endl;
    }

    return 0;
}


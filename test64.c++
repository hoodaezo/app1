#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
double divde(double a, float b)
{
    if (b != 0)
        return a / b;
    else
    {
        cout << "Error: Division by zero" << endl;
        return 0;
    }
}

int main()
{
    int num1, num2;
    char oper;
    cout << "Enter frist number: " << endl;
    cin >> num1;
    cout << "Enter scond number: " << endl;
    cin >> num2;
    cout << "Enter an operator (+,-,*,/): ";
    cin >> oper;

    switch (oper){
    case '+':
        cout << "Addition: " << add(num1, num2) << endl;
    break;

case '-':
    cout << "Subtraction: " << subtract(num1, num2) << endl;
    break;

case '*':
    cout << "Multiplication: " << multiply(num1, num2) << endl;
    break;

case '/':
   /** if (b==0)
        cout << "Division: " << divde(num1, num2) << endl;
    else
        cout << "Error: Division by zero" << endl;
    break/**/


default:
    cout << "Error: Invalid operator" << endl;
    }
    return 0;
}

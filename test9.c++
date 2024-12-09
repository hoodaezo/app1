#include <iostream>
#include <limits>
using namespace std;

// Function to perform calculation
void performCalculation(char oper, float num1, float num2) {
    if (oper == '+') {
        cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    } else if (oper == '-') {
        cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    } else if (oper == '*') {
        cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    } else if (oper == '/') {
        if (num2 != 0) {
            cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        } else {
            cout << "Error: Division by zero is not allowed!" << endl;
        }
    } else {
        cout << "Error: Invalid operator!" << endl;
    }
}

// Function to validate input
bool validateInput() {
    if (cin.fail()) {
        cin.clear(); // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
        return false;
    }
    return true;
}

int main() {
    char oper, repeat;
    float num1, num2;

    do {
        // Prompt user for inputs
        cout << "Enter an operator (+, -, *, /): ";
        cin >> oper;

        if (oper != '+' && oper != '-' && oper != '*' && oper != '/') {
            cout << "Error: Invalid operator! Try again." << endl;
            continue; // Restart loop for a valid operator
        }

        cout << "Enter the first number: ";
        cin >> num1;
        if (!validateInput()) {
            cout << "Error: Invalid input for the first number. Try again." << endl;
            continue;
        }

        cout << "Enter the second number: ";
        cin >> num2;
        if (!validateInput()) {
            cout << "Error: Invalid input for the second number. Try again." << endl;
            continue;
        }

        // Call the function to perform the calculation
        performCalculation(oper, num1, num2);

        // Ask if the user wants to perform another calculation
        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> repeat;
        if (!validateInput() || (repeat != 'y' && repeat != 'Y')) {
            cout << "Exiting program. Goodbye!" << endl;
            break;
        }

    } while (true); // Loop until the user decides to quit

    return 0;
}
#include <iostream>
#include <cmath> // For advanced math operations
#include <limits>
using namespace std;

// Function prototypes
void performCalculation(char oper, float num1, float num2);
void displayMenu();
bool validateInput();

// Main function
int main() {
    char oper, repeat;
    float num1, num2;

    do {
        // Display the menu
        displayMenu();

        // Get operator input
        cout << "Enter an operator: ";
        cin >> oper;

        // Validate operator
        if (oper != '+' && oper != '-' && oper != '*' && oper != '/' && oper != '%' && oper != '^') {
            cout << "Error: Invalid operator! Try again.\n";
            continue; // Restart loop for a valid operator
        }

        // Get numbers
        cout << "Enter the first number: ";
        cin >> num1;
        if (!validateInput()) {
            cout << "Error: Invalid input for the first number. Try again.\n";
            continue;
        }

        cout << "Enter the second number: ";
        cin >> num2;
        if (!validateInput()) {
            cout << "Error: Invalid input for the second number. Try again.\n";
            continue;
        }

        // Perform the calculation
        performCalculation(oper, num1, num2);

        // Ask if the user wants to repeat
        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> repeat;
        if (!validateInput() || (repeat != 'y' && repeat != 'Y')) {
            cout << "Exiting program. Goodbye!" << endl;
            break;
        }

    } while (true); // Repeat until the user chooses to exit

    return 0;
}

// Function to display the menu
void displayMenu() {
    cout << "\n========== Calculator Menu ==========\n";
    cout << "Operations available:\n";
    cout << "+  Addition\n";
    cout << "-  Subtraction\n";
    cout << "*  Multiplication\n";
    cout << "/  Division\n";
    cout << "%  Modulus (remainder, integers only)\n";
    cout << "^  Power (first number raised to second)\n";
    cout << "=====================================\n";
}

// Function to validate numeric input
bool validateInput() {
    if (cin.fail()) {
        cin.clear(); // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
        return false;
    }
    return true;
}

// Function to perform calculation
void performCalculation(char oper, float num1, float num2) {
    if (oper == '+') {
        cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    } else if (oper == '-') {
        cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    } else if (oper == '*') {
        cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    } else if (oper == '/') {
        if (num2 == 0) {
            cout << "Error: Division by zero is not allowed!\n";
        } else {
            cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
    } else if (oper == '%') {
        if (static_cast<int>(num2) == 0) {
            cout << "Error: Modulus by zero is not allowed!\n";
        } else {
            cout << "Result: " << static_cast<int>(num1) << " % " << static_cast<int>(num2) 
                 << " = " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
        }
    } else if (oper == '^') {
        cout << "Result: " << num1 << " ^ " << num2 << " = " << pow(num1, num2) << endl;
    } else {
        cout << "Error: Unknown operation!\n";
    }
}

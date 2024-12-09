#include <iostream>
#include <limits>
using namespace std;

void displayMenu() {
    cout << "\nSimple Calculator Menu:\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}

bool validateInput() {
    if (cin.fail()) {
        cin.clear(); // Clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
        return false;
    }
    return true;
}

int main() {
    int choice;
    float num1, num2;
    char repeat;

    do {
        displayMenu();
        cin >> choice;

        // Validate menu choice input
        if (!validateInput() || choice < 1 || choice > 5) {
            cout << "Invalid choice. Please select a valid option from the menu.\n";
            continue;
        }

        // Exit the program if the user chooses option 5
        if (choice == 5) {
            cout << "Exiting program. Goodbye!\n";
            break;
        }

        // Get numbers for calculation
        cout << "Enter the first number: ";
        cin >> num1;
        if (!validateInput()) {
            cout << "Invalid input for the first number. Try again.\n";
            continue;
        }

        cout << "Enter the second number: ";
        cin >> num2;
        if (!validateInput()) {
            cout << "Invalid input for the second number. Try again.\n";
            continue;
        }

        // Perform the operation
        switch (choice) {
            case 1: // Addition
                cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case 2: // Subtraction
                cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case 3: // Multiplication
                cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case 4: // Division
                if (num2 == 0) {
                    cout << "Error: Division by zero is not allowed.\n";
                } else {
                    cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                }
                break;
        }

        // Ask if the user wants to perform another calculation
        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> repeat;
        if (!validateInput() || (repeat != 'y' && repeat != 'Y')) {
            cout << "Exiting program. Goodbye!\n";
            break;
        }

    } while (true);

    return 0;
}

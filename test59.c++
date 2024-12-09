#include <iostream>
using namespace std;

int main()
{
    int choice;
    double money;

    cout << "Welcome to our ATM machine!" << endl;
    cout << "1. Dollar to Euro" << endl;
    cout << "2. Dollar to Dinar" << endl;
    cout << "3. Dollar to Pound" << endl;
    cout << "4. Dollar to Riyal" << endl;
    cout << "5. Exit" << endl;

    cout << "Choose currency: ";
    cin >> choice;

    if (choice >= 1 && choice <= 4) {
        cout << "Enter the amount in dollars: ";
        cin >> money;
    }

    switch (choice)
    {
    case 1: // Dollar to Euro
        cout << "Equivalent in Euros: " << money * 0.91 << endl;
        break;
    case 2: // Dollar to Dinar
        cout << "Equivalent in Dinars: " << money * 0.30 << endl;
        break;
    case 3: // Dollar to Pound
        cout << "Equivalent in Pounds: " << money * 0.79 << endl;
        break;
    case 4: // Dollar to Riyal
        cout << "Equivalent in Riyals: " << money * 3.75 << endl;
        break;
    case 5: // Exit
        cout << "Thank you for using our ATM machine!" << endl;
        break;
    default:
        cout << "Invalid choice! Please try again." << endl;
    }

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

void inputchoice(int &choice)
{
    cout << " wellcom  to atm machie chang mony" << endl;
    cout <<"enter your mony you wot chang it"<<endl;
    cin >> choice;
    cout << " 1. dolars to ero" << endl;
    cout << " 2. dolars to egypt" << endl;
    cout << " 3. dolars to roprl" << endl;
    cout << " 4. dolars to pound" << endl;
    cout << " 5. exit " << endl;
 
}

void printmony(double &mony)
{
    cout << "enter the mony you wont chang it" << endl;
    cin >> mony;
}

double atmchange(int choice, double mony)
{
    switch (choice)
    {
    case 1:
        return mony = mony * 0.91;
    case 2:
        return mony = mony * 0.23;
    case 3:
        return mony = mony * 0.36;
    case 4:
        return mony = mony * 0.84;
    case 5:
        cout << "thank you for using our atm machine" << endl;
        return 0;
    default:
        cout << "invalid choice" << endl;
    }
    return 0;
}

int main()
{
    int choice;
    double mony, result;
    
    do
    {
        inputchoice(choice);

        if (choice >= 1 && choice <= 4)
        {
            printmony(mony);
            result = atmchange(choice, mony);
            cout << "The exchanged amount is: " << result << endl;
        }
        else if (choice == 5)
        {
            cout << "Thank you for using our ATM machine!" << endl;
        }
        else
        {
            cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
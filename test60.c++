#include <iostream>
#include <string>

using namespace std;


void inputdata(int &choice)
cout <<" hello  , wellcome  into atm nachine"<<endl;
cout <<" pleas enter your mony"<<endl;
cout <<"eleas choice number "<<endl;
    cin >> choice;
    cout << "1. dollar to ero" << endl;
    cout << "2. dollar to egypt" << endl;
    cout << "3. dollar to roprl" << endl;
    cout << "4. dollar to pound" << endl;
    cout << "5. exit " << endl;


void printmony(double mony)
    cout << "your mony is : " << mony << endl;

cin>>mony
double atmchange(int choice, double mony) {






int main() 
{
int choice;
double mony;

inputdata(choice);

switch (choice) {
    case 1:
    printmony(mony);
    cout << "your mony is : " << atmchange(choice, mony) << " ero" << endl;
    break;
    case 2:
    printmony(mony);
    cout << "your mony is : " << atmchange(choice, mony) << " egypt" << endl;
    break;
    case 3:
    printmony(mony);
    cout << "your mony is : " << atmchange(choice, mony) << " roprl" << endl;
    break;
    case 4:
    printmony(mony);
    cout << "your mony is : " << atmchange(choice, mony) << " pound" << endl;
    break;
    case 5:
    cout << "thank you for using our atm machine!" << endl;
    break;
    default:
    cout << "invalid choice! please try again." << endl;
    }

    

















    return 0;
} 
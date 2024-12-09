#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "enter your number:";
    cin>>number;

    if (number > 0)
    {
        cout << "your number positiv" << endl;
    }
    else if (number < 0)
    {
        cout << "your number negativ" << endl;
    }
    else
    {
        cout << "your number eqwal zero" << endl;
    }
    return 0;
}

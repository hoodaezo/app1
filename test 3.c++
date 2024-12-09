#include <iostream>
using namespace std;
int mine()
{
    string name = "unknow";
    int age = 0;
    double gpt = 0;
    char letter = 'a';
    bool success = true;

    cout << "your name is     :\n";
    cin >> name;
    cout << "your  age is     :\n";
    cin >> age;
    cout << " yuor gpt is     :\n";
    cin >> gpt;
    cout << "you are success  :\n";
    cin >> success;

    cout << "what is your name ?" << name << endl;
    cout << "how  age are you?" << age << endl;
    cout << "what is youd  gpt?" << gpt << endl;
    cout << "what is the letter?" << letter << endl;
    cout << "if success=1 congratulion else never maind" << success << endl;

    return 0;
}
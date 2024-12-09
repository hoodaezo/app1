#include <iostream>
#include <string>
using namespace std;

// Function to calculate the sum of two integers
void sumInteger() {
    int num1, num2;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
}

// Function to display program information
void information() {
    cout << "Hello, World!" << endl;
    cout << "This is a C++ program." << endl;
    cout << "This program calculates the sum of two numbers." << endl;
    cout << "The sum is displayed below:" << endl;
    sumInteger();
}

// Function to display address details
void address() {
    cout << "My address is:" << endl;
    cout << "123 Street Name" << endl;
    cout << "City, State, ZIP Code" << endl;
    cout << "This program was created by me." << endl;
    information();
}

// Function to perform arithmetic operations on four floats
void arithmetic() {
    float num1, num2, num3, num4;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;
    cout << "Enter number 4: ";
    cin >> num4;
    cout << "Total: " << num1 + num2 - num3 + num4 << endl;
    address();
}

// Function to multiply two integers
int multiply() {
    int num1, num2, result;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    result = num1 * num2;
    cout << "The multiplication of " << num1 << " and " << num2 << " is " << result << endl;
    return result;
}

// Function to concatenate two strings
string concatenateStrings() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    string result = str1 + str2;
    cout << "The concatenation of \"" << str1 << "\" and \"" << str2 << "\" is \"" << result << "\"" << endl;
    multiply();
    return result;
}

// Main function
int main() {
     //Uncomment the desired function calls below to test each feature:

     sumInteger();
     information();
     address();
     arithmetic();
     multiply();
     concatenateStrings();

    return 0;
}

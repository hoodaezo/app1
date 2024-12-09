#include <iostream>
#include <string>
using namespace std;

// Structure for storing phone numbers
struct PhoneNumbers {
    string phone_home;
    string phone_work;
    string phone_cell;
    string phone_other;
    string phone_friends;
    string phone_family;
    string phone_school;
    string phone_other_country;
};

// Structure for storing person details
struct PersonDetails {
    string name;
    int age;
    string city;
    string country;
    int month_salary;
    int year_salary;
    char gender;
    bool married;
    PhoneNumbers phone_numbers; // Embedding PhoneNumbers in PersonDetails
};

// Function to input person details
void inputPersonDetails(PersonDetails &person) {
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, person.name);
    cout << "Enter age: ";
    cin >> person.age;
    cout << "Enter city: ";
    cin.ignore();
    getline(cin, person.city);
    cout << "Enter country: ";
    getline(cin, person.country);
    cout << "Enter monthly salary: ";
    cin >> person.month_salary;
    person.year_salary = person.month_salary * 12;
    cout << "Enter gender (M/F): ";
    cin >> person.gender;
    cout << "Married (1 for Yes, 0 for No): ";
    cin >> person.married;

    // Input phone numbers
    cout << "Enter home phone number: ";
    cin >> person.phone_numbers.phone_home;
    cout << "Enter work phone number: ";
    cin >> person.phone_numbers.phone_work;
    cout << "Enter cell phone number: ";
    cin >> person.phone_numbers.phone_cell;
    cout << "Enter other phone number: ";
    cin >> person.phone_numbers.phone_other;
    cout << "Enter friend's phone number: ";
    cin >> person.phone_numbers.phone_friends;
    cout << "Enter family phone number: ";
    cin >> person.phone_numbers.phone_family;
    cout << "Enter school phone number: ";
    cin >> person.phone_numbers.phone_school;
    cout << "Enter other country's phone number: ";
    cin >> person.phone_numbers.phone_other_country;
}

// Function to display person details
void displayPersonDetails(const PersonDetails &person) {
    cout << "----------------------------------------" << endl;
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "City: " << person.city << endl;
    cout << "Country: " << person.country << endl;
    cout << "Monthly Salary: " << person.month_salary << endl;
    cout << "Yearly Salary: " << person.year_salary << endl;
    cout << "Gender: " << (person.gender == 'M' ? "Male" : "Female") << endl;
    cout << "Married: " << (person.married ? "Yes" : "No") << endl;
    cout << "Phone Numbers:" << endl;
    cout << "  Home: " << person.phone_numbers.phone_home << endl;
    cout << "  Work: " << person.phone_numbers.phone_work << endl;
    cout << "  Cell: " << person.phone_numbers.phone_cell << endl;
    cout << "  Other: " << person.phone_numbers.phone_other << endl;
    cout << "  Friends: " << person.phone_numbers.phone_friends << endl;
    cout << "  Family: " << person.phone_numbers.phone_family << endl;
    cout << "  School: " << person.phone_numbers.phone_school << endl;
    cout << "  Other Country: " << person.phone_numbers.phone_other_country << endl;
    cout << "----------------------------------------" << endl;
}

int main() {
    const int numPersons = 3;
    PersonDetails persons[numPersons];

    // Input details for all persons
    for (int i = 0; i < numPersons; ++i) {
        cout << "Enter details for person " << i + 1 << ":" << endl;
        inputPersonDetails(persons[i]);
    }

    // Display details for all persons
    cout << "\nDisplaying details of all persons:\n";
    for (int i = 0; i < numPersons; ++i) {
        displayPersonDetails(persons[i]);
    }

    return 0;
}

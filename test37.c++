#include <iostream>
#include <string>

using namespace std;

// Define the struct
struct idinfo {
    string f_name;
    string l_name;
    int age;
};

// Function to read information for a single idinfo object
void read_info(idinfo& info) {
    cout << "Enter your first name: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, info.f_name);

    cout << "Enter your last name: ";
    getline(cin, info.l_name);

    cout << "Enter your age: ";
    cin >> info.age;
}

// Function to print information for a single idinfo object
void print_info(const idinfo& info) {
    cout << "First Name: " << info.f_name << endl;
    cout << "Last Name: " << info.l_name << endl;
    cout << "Age: " << info.age << endl;
}

// Function to read information for an array of idinfo objects
void read_info_array(idinfo person[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Person " << i + 1 << ":" << endl;
        read_info(person[i]);
    }
}

// Function to print information for an array of idinfo objects
void print_info_array(const idinfo person[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Person " << i + 1 << ":" << endl;
        print_info(person[i]);
    }
}

int main() {
    const int size = 2; // Array size
    idinfo people[size]; // Array to store people's information

    // Read information
    cout << "Enter information for " << size << " people:" << endl;
    read_info_array(people, size);

    // Print information
    cout << "\nDisplaying information:" << endl;
    print_info_array(people, size);

    return 0;
}

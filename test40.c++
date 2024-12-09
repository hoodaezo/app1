#include <iostream>
#include <string>

using namespace std;

struct worker {
    string name_worker;
    int id_worker;
    int salary_worker;
};

// Function to read information for a single worker
void read_info(worker& go) {
    cout << "Enter the name of the worker: ";
    cin >> go.name_worker;

    cout << "Enter the ID of the worker: ";
    cin >> go.id_worker;

    cout << "Enter the salary of the worker: ";
    cin >> go.salary_worker;
}

// Function to print information for a single worker
void print_info(const worker& go) {
    cout << "Worker's Name: " << go.name_worker << endl;
    cout << "Worker's ID: " << go.id_worker << endl;
    cout << "Worker's Salary: " << go.salary_worker << endl;
}

// Function to read information for an array of worker objects
void read_info(worker workers[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter information for worker " << i + 1 << ":\n";
        read_info(workers[i]);
    }
}

// Function to print information for an array of worker objects
void print_info(worker workers[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Information for worker " << i + 1 << ":\n";
        print_info(workers[i]);
    }
}

int main() {
    const int size = 2; // Size of the array
    worker workers[size]; // Array to store two workers' information

    // Read information for workers
    read_info(workers, size);

    // Print information for workers
    print_info(workers, size);

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

struct worker {
    string name_worker;
    int id_worker;
    int salary_worker;
};

// Function to read information for a single worker
void read_info(worker &go) {
    cout << "Enter the name of the worker: ";
    cin >> go.name_worker;

    cout << "Enter the ID of the worker: ";
    cin >> go.id_worker;

    cout << "Enter the salary of the worker: ";
    cin >> go.salary_worker;
}

// Function to print information for a single worker
void print_info(const worker &go) {
    cout << "Worker's Name: " << go.name_worker << endl;
    cout << "Worker's ID: " << go.id_worker << endl;
    cout << "Worker's Salary: " << go.salary_worker << endl;
}

int main() {
    worker workers[2]; // Array to store information for two workers

    // Read information for both workers
    for (int i = 0; i < 2; i++) {
        cout << "Enter information for worker " << i + 1 << ":\n";
        read_info(workers[i]);
    }

    // Print information for both workers
    cout << "\nDisplaying information for all workers:\n";
    for (int i = 0; i < 2; i++) {
        cout << "Information for worker " << i + 1 << ":\n";
        print_info(workers[i]);
    }

    return 0;
}

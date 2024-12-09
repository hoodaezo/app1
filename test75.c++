#include <iostream>
#include <vector>
#include <string>
using namespace std;

// تعريف Enum لحالة المهمة
enum TaskStatus {
    PENDING,
    IN_PROGRESS,
    COMPLETED
};

// تعريف Struct للمهمة
struct Task {
    int id;
    string name;
    TaskStatus status;
};

// قائمة لتخزين المهام
vector<Task> tasks;

// دالة لإضافة مهمة جديدة
void addTask() {
    Task newTask;
    cout << "Enter task ID: ";
    cin >> newTask.id;
    cin.ignore(); // للتأكد من قراءة النصوص بشكل صحيح
    cout << "Enter task name: ";
    getline(cin, newTask.name);
    newTask.status = PENDING; // الحالة الافتراضية
    tasks.push_back(newTask);
    cout << "Task added successfully!\n";
}

// دالة لتغيير حالة المهمة
void updateTaskStatus() {
    int id, status;
    cout << "Enter task ID to update: ";
    cin >> id;

    bool found = false;
    for (auto& task : tasks) {
        if (task.id == id) {
            cout << "Select new status (0: PENDING, 1: IN_PROGRESS, 2: COMPLETED): ";
            cin >> status;
            if (status >= 0 && status <= 2) {
                task.status = static_cast<TaskStatus>(status);
                cout << "Task status updated successfully!\n";
                found = true;
                break;
            } else {
                cout << "Invalid status. Please try again.\n";
                return;
            }
        }
    }
    if (!found) {
        cout << "Task not found.\n";
    }
}

// دالة لعرض المهام
void displayTasks() {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }

    cout << "\nTasks List:\n";
    for (const auto& task : tasks) {
        cout << "ID: " << task.id << ", Name: " << task.name << ", Status: ";
        switch (task.status) {
            case PENDING:
                cout << "PENDING";
                break;
            case IN_PROGRESS:
                cout << "IN_PROGRESS";
                break;
            case COMPLETED:
                cout << "COMPLETED";
                break;
        }
        cout << endl;
    }
}

// القائمة الرئيسية
int main() {
    int choice;

    do {
        cout << "\nTask Manager\n";
        cout << "1. Add Task\n";
        cout << "2. Update Task Status\n";
        cout << "3. Display Tasks\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                updateTaskStatus();
                break;
            case 3:
                displayTasks();
                break;
            case 4:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

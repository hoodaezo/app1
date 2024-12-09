#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

// هيكل لتخزين بيانات المهمة
struct Task {
    int id;
    string description;
    bool isComplete;
};

// قائمة المهام
vector<Task> tasks;

// دالة لإضافة مهمة جديدة
void addTask() {
    Task task;
    cout << "أدخل رقم المهمة (ID): ";
    cin >> task.id;
    cin.ignore();
    cout << "أدخل وصف المهمة: ";
    getline(cin, task.description);
    task.isComplete = false; // المهمة تبدأ كغير مكتملة
    tasks.push_back(task);
    cout << "تمت إضافة المهمة بنجاح!" << endl;
}

// دالة لعرض جميع المهام
void displayTasks() {
    if (tasks.empty()) {
        cout << "لا توجد مهام حالياً." << endl;
        return;
    }

    cout << "\nقائمة المهام:" << endl;
    cout << "ID\tالوصف\t\tالحالة" << endl;
    for (const auto& task : tasks) {
        cout << task.id << "\t" << task.description 
             << "\t" << (task.isComplete ? "مكتملة" : "غير مكتملة") << endl;
    }
}

// دالة لتحديث حالة المهمة
void updateTaskStatus() {
    int id;
    cout << "أدخل رقم المهمة لتحديث حالتها: ";
    cin >> id;

    for (auto& task : tasks) {
        if (task.id == id) {
            task.isComplete = !task.isComplete; // عكس الحالة الحالية
            cout << "تم تحديث حالة المهمة بنجاح!" << endl;
            return;
        }
    }
    cout << "المهمة غير موجودة." << endl;
}

// دالة لحذف مهمة
void deleteTask() {
    int id;
    cout << "أدخل رقم المهمة للحذف: ";
    cin >> id;

    for (size_t i = 0; i < tasks.size(); ++i) {
        if (tasks[i].id == id) {
            tasks.erase(tasks.begin() + i);
            cout << "تم حذف المهمة بنجاح!" << endl;
            return;
        }
    }
    cout << "المهمة غير موجودة." << endl;
}

// دالة لحفظ المهام في ملف
void saveToFile() {
    ofstream file("tasks.txt");
    if (!file.is_open()) {
        cout << "خطأ في فتح الملف." << endl;
        return;
    }

    for (const auto& task : tasks) {
        file << task.id << "," << task.description << "," << task.isComplete << endl;
    }
    file.close();
    cout << "تم حفظ المهام بنجاح!" << endl;
}

// دالة لاسترجاع المهام من ملف
void loadFromFile() {
    ifstream file("tasks.txt");
    if (!file.is_open()) {
        cout << "لا يوجد ملف بيانات للتحميل." << endl;
        return;
    }

    tasks.clear(); // مسح المهام الحالية
    Task task;
    string line;

    while (getline(file, line)) {
        size_t pos = 0;
        string token;
        int column = 0;

        while ((pos = line.find(',')) != string::npos) {
            token = line.substr(0, pos);
            line.erase(0, pos + 1);

            if (column == 0) task.id = stoi(token);
            else if (column == 1) task.description = token;
            column++;
        }
        task.isComplete = stoi(line); // آخر عنصر
        tasks.push_back(task);
    }
    file.close();
    cout << "تم تحميل المهام بنجاح!" << endl;
}

int main() {
    loadFromFile();
    int choice;

    do {
        cout << "\nنظام إدارة المهام" << endl;
        cout << "1. إضافة مهمة جديدة" << endl;
        cout << "2. عرض المهام" << endl;
        cout << "3. تحديث حالة مهمة" << endl;
        cout << "4. حذف مهمة" << endl;
        cout << "5. حفظ المهام" << endl;
        cout << "6. خروج" << endl;
        cout << "اختر خياراً: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                displayTasks();
                break;
            case 3:
                updateTaskStatus();
                break;
            case 4:
                deleteTask();
                break;
            case 5:
                saveToFile();
                break;
            case 6:
                saveToFile();
                cout << "وداعاً!" << endl;
                break;
            default:
                cout << "خيار غير صحيح، حاول مرة أخرى." << endl;
        }
    } while (choice != 6);

    return 0;
}

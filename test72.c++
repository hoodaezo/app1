#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;


// تعريف الهيكل الذي سيتم ا��تخدامه لتخزين المعلومات
    struct task {
        string discraption;
        int id;
        bool complete;
    };
    // ��نشا�� قا��مة لتخزين المهام

    vector<task> tasks;
    // دالة لضافه ا��ة المهام من ملف وتخزينها في القا�مة   
    void addTask()
    {
        task newTask;
        cout << "اكتب الوصف للمهمة: ";
        getline(cin, newTask.discraption);
        cout << "اكتب الرقم التسلسلي للمهمة: ";
        cin >> newTask.id;
        newTask.complete = false;
        tasks.push_back(newTask);
        cout << "تم ��ضافة المهمة بنجا��.\n";
        
    }
    // دالة لعرض كل المهام من القا�مة
    void displayTasks()
{
    cout << "********************\n";
    cout << "المهام:\n";
    cout << "********************\n";
    for (int i = 0; i < tasks.size(); i++) {
        cout << "المهمة رقم " << tasks[i].id << ": " << tasks[i].discraption << endl;
        if (tasks[i].complete) {
            cout << "تم الانتها�� منها.\n";
        } else {
            cout << "لم يتم الانتها�� منها.\n";
        }
    }
    cout << "********************\n";

ل
    void updatetaskStatus()
    { int id;
    cout << "اكتب رقم التسلسلي للمهمة: ";
    cin >> id;
    for (int i = 0; i < tasks.size(); i++) {
        if (tasks[i].id == id) {
            tasks[i].complete =!tasks[i].complete;
            cout << "تم تحديث حالة المهمة بنجا��.\n";
            return;
        }

        void deleteTask()
        {
            int id;
            cout << "اكتب رقم التسلسلي للمهمة: ";
            cin >> id;
            for (int i = 0; i < tasks.size(); i++) {
                if (tasks[i].id == id) {
                    tasks.erase(tasks.begin() + i);
                    cout << "تم حذف المهمة بنجا��.\n";
                    return;
                }
            }
            cout << "المهمة التي تريد حذفها ��ير موجودة.\n";


        }

        void saveTasksToFile()
        {
            ofstream file("tasks.txt");
            if (file) {
                for (int i = 0; i < tasks.size(); i++) {
                    file << tasks[i].discraption << endl;
                    file << tasks[i].id << endl;
                    file << tasks[i].complete << endl;
                }
                file.close();
                cout << "تم حف�� المهام في الملف بنجا��.\n";
            } else {
                cout << "تعذر حف�� المهام في الملف.\n";
            }
        }
        void loadTasksFromFile()
        {
            ifstream file("tasks.txt");
            if (file) {
                string discraption;
                int id;
                bool complete;
                while (getline(file, discraption)) {
                    file >> id;
                    file >> complete;
                    task newTask;
                    newTask.discraption = discraption;
                    newTask.id = id;
                    newTask.complete = complete;
                    tasks.push_back(newTask);
                }
                file.close();
                cout << "تم تحميل المهام من الملف بنجا��.\n";
            } else {
                cout << "تعذر تحميل المهام من الملف.\n";
            }






        }





    }



}
int main(){
    loadTasksFromFile();
    int choice;
    while (true) {
        cout << "مرحباً بك في تطبيق تكوين المهام.\n";
        cout << "1. إضافة مهمة.\n";
        cout << "2. عرض كل المهام.\n";
        cout << "3. تحديث حالة المهمة.\n";
        cout << "4. حذف المهمة.\n";
        cout << "5. حفظ المهام في الملف.\n";
        cout << "6. تحميل المهام من الملف.\n";
        cout << "7. إغلاق التطبيق.\n";
        cout << "اكتب رقم الخيار الذي تريد التنفيذ به: ";
        cin >>
        choice;
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
                saveTasksToFile();
                break;
            case 6:
                loadTasksFromFile();
                break;
            case 7:
                saveTasksToFile();
                loadTasksFromFile();
                return 0;
            default:
                cout << "الرجا�� التأكد من رقم الخيار الذي أدخلته.\n";
    




    return 0;
}
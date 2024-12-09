#include <iostream>
#include <fstream>
#include <string>
#include <filesystem> // لإدارة الملفات مثل الحذف
using namespace std;

void createFile(const string &filename);
void writeFile(const string &filename);
void readFile(const string &filename);
void deleteFile(const string &filename);

int main()
{
    int choice;
    string filename;

    do
    {
        cout << "===== File Management System =====\n";
        cout << "1. Create a new file\n";
        cout << "2. Write to a file\n";
        cout << "3. Read a file\n";
        cout << "4. Delete a file\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the file name: ";
            cin >> filename;
            createFile(filename);
            break;
        case 2:
            cout << "Enter the file name: ";
            cin >> filename;
            writeFile(filename);
            break;
        case 3:
            cout << "Enter the file name: ";
            cin >> filename;
            readFile(filename);
            break;
        case 4:
            cout << "Enter the file name: ";
            cin >> filename;
            deleteFile(filename);
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;


 /*void createFile(const string& filename) {
    ofstream file(filename);
    if (file) {
        cout << "File " << filename << " created successfully.\n";
    } else {
        cout << "Error creating file.\n";
    }
    file.close();
 }

 void writeFile(const string& filename) {
    ofstream file(filename, ios::app); // فتح الملف بوضع الإلحاق
    if (file) {
        string text;
        cout << "Enter text to write to the file (end with ';'):\n";
        cin.ignore(); // لتجاهل أي إدخال سابق
        getline(cin, text, ';');
        file << text << endl;
        cout << "Text written to file successfully.\n";
    } else {
        cout << "Error opening file.\n";
    }
    file.close();
 }

 void readFile(const string& filename) {
    ifstream file(filename);
    if (file) {
        string line;
        cout << "Contents of the file " << filename << ":\n";
        while (getline(file, line)) {
            cout << line << endl;
        }
    } else {
        cout << "Error reading file. Make sure it exists.\n";
    }
    file.close();
 }

 void deleteFile(const string& filename) {
    if (filesystem::remove(filename)) {
        cout << "File " << filename << " deleted successfully.\n";
    } else {
        cout << "Error deleting file. Make sure it exists.\n";
    }*/
}

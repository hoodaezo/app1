#include <iostream>
#include <fstream>
#include <string>
#include <filesystem> // لإدارة الملفات مثل الحذف وعرض القائمة
using namespace std;

void creatfile(const string &file name);
{
    ofstream file(filename); // إنشاء الملف
    if (file)
    {
        cout << "تم إنشاء الملف " << filename << " بنجاح.\n";
    }
    else
    {
        cout << "حدث خطأ أثناء إنشاء الملف.\n";
    }
    file.close();
}
void writefile(const string &filename);
{
    if (!filesystem::exists(filename))
    {
        cout << "خطأ: الملف " << filename << " غير موجود.\n";
        return;
    }
    ofstream file(filename, ios::app); // فتح الملف بوضع الإلحاق
    if (file)
    {
        string text;
        cout << "اكتب النص الذي تريد إضافته للملف (وأنهِ بإدخال ';'):\n";
        cin.ignore(); // لتجنب مشاكل الإدخال
        getline(cin, text, ';');
        file << text << endl;
        cout << "تمت إضافة النص للملف بنجاح.\n";
    }
    else
    {
        cout << "تعذر فتح الملف للكتابة.\n";
    }
    file.close();
}
void readfile(const string &filename);
{
    if (!filesystem::exists(filename))
    {
        cout << "خطأ: الملف " << filename << " غير موجود.\n";
        return;
    }
    ifstream file(filename); // فتح الملف للقراءة
    if (file)
    {
        string line;
        cout << "===== محتويات الملف " << filename << " =====\n";
        while (getline(file, line))
        {
            cout << line << endl;
        }
    }
    else
    {
        cout << "تعذر فتح الملف للقراءة.\n";
    }
    file.close();
}

void dletefile(const strig &filename);
{

    if (filesystem::remove(filename))
    {
        cout << "تم حذف الملف " << filename << " بنجاح.\n";
    }
    else
    {
        cout << "تعذر حذف الملف. تأكد من وجوده.\n";
    }
}

void listfile(const string &filenae);
{

    cout << "===== الملفات الموجودة في المجلد الحالي =====\n";
    for (const auto &entry : filesystem::directory_iterator("."))
    {
        if (entry.is_regular_file())
        {
            cout << entry.path().filename().string() << endl;
        }
    }
}

int main()
{
    int choice;
    string filename;

    do
    {
        cout << "******** maneger file *********\n";
        cout << "1. creat file\n";
        cout << "2. write to file\n";
        cout << "3. read from file\n";
        cout << "4. delete file\n";
        cout << "5. list files\n";
        cout << "6. exit\n";
        cout << "Enter your choice : ";
        cin >> choice;
    }
    switch (choice)
    {
    case 1:
        cout << "enter file name : ";
        cin >> filename;
        creatfile(filename);
        break;
    case 2:
        cout << "enter file name : ";
        cin >> filename;
        writefile(filename);
        break;
    case 3:
        cout << "enter file name : ";
        cin >> filename;
        readfile(filename);
        break;
    case 4:
        cout << "enter file name : ";
        cin >> filename;
        dletefile(filename);
        break;
    case 5:
        listfile("");
        break;
    case 6:
        cout << "good bye";
        break;
    default:
        cout << "invalid choice";
        break;
    }
    return 0;
}
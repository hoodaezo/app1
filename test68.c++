#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

// هيكل لتخزين بيانات الكتاب
struct Book
{
    int id;
    string title;
    string author;
    int year;
};

// قائمة الكتب
vector<Book> library;

// دالة لإضافة كتاب جديد
void addBook()
{
    Book book;
    cout << "أدخل معرف الكتاب (ID): ";
    cin >> Book.id;
    cin.ignore(); // لتجنب مشاكل الإدخال
    cout << "أدخل عنوان الكتاب: ";
    getline(cin, Book.title);
    cout << "أدخل اسم المؤلف: ";
    getline(cin, Book.author);
    cout << "أدخل سنة النشر: ";
    cin >> Book.year;

    library.push_back(Book);
    cout << "تم إضافة الكتاب بنجاح!" << endl;
}

// دالة لعرض جميع الكتب
void displayBooks()
{
    if (library.empty())
    {
        cout << "لا توجد كتب في المكتبة حالياً." << endl;
        return;
    }

    cout << "\nقائمة الكتب:" << endl;
    cout << "ID\tالعنوان\tالمؤلف\tسنة النشر" << endl;
    for (const auto &book : library)
    {
        cout << book.id << "\t" << book.title << "\t" << book.author << "\t" << book.year << endl;
    }
}

// دالة للبحث عن كتاب
void searchBook()
{
    int id;
    cout << "أدخل معرف الكتاب للبحث: ";
    cin >> id;

    for (const auto &book : library)
    {
        if (book.id == id)
        {
            cout << "تم العثور على الكتاب!" << endl;
            cout << "ID: " << book.id << ", العنوان: " << book.title
                 << ", المؤلف: " << book.author << ", سنة النشر: " << book.year << endl;
            return;
        }
    }
    cout << "الكتاب غير موجود." << endl;
}

// دالة لحذف كتاب
void deleteBook()
{
    int id;
    cout << "أدخل معرف الكتاب للحذف: ";
    cin >> id;

    for (size_t i = 0; i < library.size(); ++i)
    {
        if (library[i].id == id)
        {
            library.erase(library.begin() + i);
            cout << "تم حذف الكتاب بنجاح!" << endl;
            return;
        }
    }
    cout << "الكتاب غير موجود." << endl;
}

// دالة لحفظ البيانات في ملف
void saveToFile()
{
    ofstream file("library.txt");
    if (!file.is_open())
    {
        cout << "خطأ في فتح الملف." << endl;
        return;
    }

    for (const auto &book : library)
    {
        file << book.id << "," << book.title << ","
             << book.author << "," << book.year << endl;
    }
    file.close();
    cout << "تم حفظ البيانات بنجاح!" << endl;
}

// دالة لاسترجاع البيانات من ملف
void loadFromFile()
{
    ifstream file("library.txt");
    if (!file.is_open())
    {
        cout << "لا يوجد ملف بيانات للتحميل." << endl;
        return;
    }

    library.clear(); // مسح البيانات الحالية
    Book book;
    string line;
    while (getline(file, line))
    {
        size_t pos = 0;
        string token;
        int column = 0;

        while ((pos = line.find(',')) != string::npos)
        {
            token = line.substr(0, pos);
            line.erase(0, pos + 1);

            if (column == 0)
                book.id = stoi(token);
            else if (column == 1)
                book.title = token;
            else if (column == 2)
                book.author = token;
            column++;
        }
        book.year = stoi(line); // آخر عنصر
        library.push_back(book);
    }
    file.close();
    cout << "تم تحميل البيانات بنجاح!" << endl;
}

int main()
{
    loadFromFile();
    int choice;

    do
    {
        cout << "\nنظام إدارة المكتبة" << endl;
        cout << "1. إضافة كتاب جديد" << endl;
        cout << "2. عرض جميع الكتب" << endl;
        cout << "3. البحث عن كتاب" << endl;
        cout << "4. حذف كتاب" << endl;
        cout << "5. حفظ البيانات" << endl;
        cout << "6. خروج" << endl;
        cout << "اختر خياراً: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addBook();
            break;
        case 2:
            displayBooks();
            break;
        case 3:
            searchBook();
            break;
        case 4:
            deleteBook();
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

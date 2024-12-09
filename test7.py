# مكتبة للتعامل مع الوقت
import datetime

# قائمة لتخزين المهام
tasks = []

# دالة لإضافة مهمة جديدة
def add_task():
    title = input("أدخل عنوان المهمة: ")
    due_date = input("أدخل تاريخ الاستحقاق (YYYY-MM-DD): ")
    try:
        due_date = datetime.datetime.strptime(due_date, "%Y-%m-%d").date()
        tasks.append({"title": title, "due_date": due_date, "status": "Pending"})
        print("تمت إضافة المهمة بنجاح!")
    except ValueError:
        print("التاريخ غير صالح. حاول مرة أخرى.")

# دالة لعرض المهام
def view_tasks():
    if not tasks:
        print("لا توجد مهام حالياً.")
    else:
        for i, task in enumerate(tasks):
            print(f"{i+1}. {task['title']} - {task['due_date']} - {task['status']}")

# دالة لتحديث حالة مهمة
def update_task():
    view_tasks()
    if tasks:
        try:
            task_num = int(input("أدخل رقم المهمة لتحديث حالتها: "))
            if 1 <= task_num <= len(tasks):
                tasks[task_num-1]["status"] = "Completed"
                print("تم تحديث حالة المهمة!")
            else:
                print("رقم المهمة غير صحيح.")
        except ValueError:
            print("يرجى إدخال رقم صحيح.")

# دالة لحذف مهمة
def delete_task():
    view_tasks()
    if tasks:
        try:
            task_num = int(input("أدخل رقم المهمة لحذفها: "))
            if 1 <= task_num <= len(tasks):
                tasks.pop(task_num-1)
                print("تم حذف المهمة!")
            else:
                print("رقم المهمة غير صحيح.")
        except ValueError:
            print("يرجى إدخال رقم صحيح.")

# القائمة الرئيسية
def main():
    while True:
        print("\n--- مدير المهام ---")
        print("1. إضافة مهمة")
        print("2. عرض المهام")
        print("3. تحديث حالة مهمة")
        print("4. حذف مهمة")
        print("5. الخروج")
        choice = input("أدخل اختيارك: ")
        
        if choice == "1":
            add_task()
        elif choice == "2":
            view_tasks()
        elif choice == "3":
            update_task()
        elif choice == "4":
            delete_task()
        elif choice == "5":
            print("إلى اللقاء!")
            break
        else:
            print("اختيار غير صحيح. حاول مرة أخرى.")

# تشغيل البرنامج
if __name__ == "__main__":
    main()

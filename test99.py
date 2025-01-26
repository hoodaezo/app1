# تخزين النفقات الشهرية
expenses = {}

def add_expense():
    category = input("أدخل فئة النفقات (مثال: طعام، سكن): ")
    amount = float(input(f"أدخل المبلغ الذي تم صرفه على {category}: "))
    if category in expenses:
        expenses[category] += amount
    else:
        expenses[category] = amount

def show_expenses():
    print("\nقائمة النفقات الشهرية:")
    for category, amount in expenses.items():
        print(f"{category}: {amount} جنيه")

def calculate_total_expenses():
    total = sum(expenses.values())
    print(f"\nإجمالي النفقات الشهرية: {total} جنيه")

def main():
    while True:
        print("\nاختر عملية:")
        print("1. إضافة نفقة")
        print("2. عرض النفقات")
        print("3. حساب إجمالي النفقات")
        print("4. خروج")
        
        choice = input("أدخل اختيارك: ")
        
        if choice == '1':
            add_expense()
        elif choice == '2':
            show_expenses()
        elif choice == '3':
            calculate_total_expenses()
        elif choice == '4':
            break
        else:
            print("اختيار غير صحيح.")

if __name__ == "__main__":
    main()

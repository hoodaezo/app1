def calculator():
    print("اختار العملية: ")
    print("1. جمع (+)")
    print("2. طرح (-)")
    print("3. ضرب (*)")
    print("4. قسمة (/)")

    choice = input("أدخل اختيارك (1/2/3/4): ")

    if choice in ['1', '2', '3', '4']:
        num1 = float(input("أدخل الرقم الأول: "))
        num2 = float(input("أدخل الرقم الثاني: "))

        if choice == '1':
            print(f"النتيجة: {num1} + {num2} = {num1 + num2}")
        elif choice == '2':
            print(f"النتيجة: {num1} - {num2} = {num1 - num2}")
        elif choice == '3':
            print(f"النتيجة: {num1} * {num2} = {num1 * num2}")
        elif choice == '4':
            if num2 != 0:
                print(f"النتيجة: {num1} / {num2} = {num1 / num2}")
            else:
                print("القسمة على صفر غير مسموحة.")
    else:
        print("اختيار غير صحيح.")

calculator()

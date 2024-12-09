# دالة لكتابة نص في ملف
def write_to_file(file_name, content):
    with open(file_name, 'w') as file:
        file.write(content)
    print(f"تم كتابة النص في الملف: {file_name}")

# دالة لقراءة محتوى ملف
def read_from_file(file_name):
    try:
        with open(file_name, 'r') as file:
            content = file.read()
        print(f"محتوى الملف {file_name}:\n{content}")
        return content
    except FileNotFoundError:
        print(f"الملف {file_name} غير موجود!")
        return None

# دوال للتعامل مع النصوص
def reverse_string(text):
    return text[::-1]

def convert_to_uppercase(text):
    return text.upper()

def convert_to_lowercase(text):
    return text.lower()

# دوال حسابية
def add_numbers(a, b):
    return a + b

def subtract_numbers(a, b):
    return a - b

def multiply_numbers(a, b):
    return a * b

def divide_numbers(a, b):
    if b != 0:
        return a / b
    else:
        print("لا يمكن القسمة على صفر!")
        return None

# تطبيق الدوال
if __name__ == "__main__":
    # كتابة نص في ملف
    file_name = "example.txt"
    text = "مرحبا بك في عالم بايثون!"
    write_to_file(file_name, text)

    # قراءة النص من الملف
    content = read_from_file(file_name)
    
    # التعامل مع النصوص
    if content:
        print("النص معكوس:", reverse_string(content))
        print("النص بأحرف كبيرة:", convert_to_uppercase(content))
        print("النص بأحرف صغيرة:", convert_to_lowercase(content))
    
    # العمليات الحسابية
    num1, num2 = 10, 5
    print(f"جمع {num1} و {num2} = {add_numbers(num1, num2)}")
    print(f"طرح {num1} و {num2} = {subtract_numbers(num1, num2)}")
    print(f"ضرب {num1} و {num2} = {multiply_numbers(num1, num2)}")
    print(f"قسمة {num1} على {num2} = {divide_numbers(num1, num2)}")

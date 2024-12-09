# قراءة ملف نصي
with open("file.txt", "r") as file:
    content = file.read()
    print(content)

# كتابة ملف نصي
with open("output.txt", "w") as file:
    file.write("Hello, this is Python!")





/////////////////////////////////////////////////
import requests

# إرسال طلب GET إلى API
response = requests.get("https://jsonplaceholder.typicode.com/posts/1")
if response.status_code == 200:
    data = response.json()
    print(data)



////////////////////////////////////////////////


import os

# إنشاء مجلد جديد
os.mkdir("new_folder")

# عرض الملفات في مجلد
files = os.listdir(".")
print(files)

# حذف ملف
os.remove("file_to_delete.txt")








///////////////////////////////////////////////////

from datetime import datetime, timedelta

# الوقت والتاريخ الحالي
now = datetime.now()
print("Current Time:", now)

# إضافة أيام إلى التاريخ الحالي
future_date = now + timedelta(days=7)
print("Future Date:", future_date)






//////////////////////////////////////////////////////////

from PIL import Image

# فتح صورة
img = Image.open("example.jpg")

# تغيير حجم الصورة
img_resized = img.resize((200, 200))

# حفظ الصورة المعدلة
img_resized.save("resized_image.jpg")








////////////////////////////////////////////////////////
from sklearn.linear_model import LinearRegression
import numpy as np

# بيانات بسيطة
X = np.array([[1], [2], [3], [4]])
y = np.array([2, 4, 6, 8])

# تدريب النموذج
model = LinearRegression()
model.fit(X, y)

# التنبؤ
prediction = model.predict([[5]])
print("Prediction for 5:", prediction)


////////////////////////////////////////
import tkinter as tk

# إنشاء نافذة
window = tk.Tk()
window.title("Simple App")

# إضافة زر
def on_click():
    print("Button Clicked!")

button = tk.Button(window, text="Click Me", command=on_click)
button.pack()

# تشغيل التطبيق
window.mainloop()


//////////////////////////////////////////////




import tkinter as tk

# إنشاء نافذة
window = tk.Tk()
window.title("Simple App")

# إضافة زر
def on_click():
    print("Button Clicked!")

button = tk.Button(window, text="Click Me", command=on_click)
button.pack()

# تشغيل التطبيق
window.mainloop()


///////////////////////////////////////////////////
import threading
import time

def print_numbers():
    for i in range(5):
        print(i)
        time.sleep(1)

# إنشاء وتشغيل الخيوط
thread1 = threading.Thread(target=print_numbers)
thread2 = threading.Thread(target=print_numbers)

thread1.start()
thread2.start()

thread1.join()
thread2.join()


///////////////////////////////////////////////////////
import sqlite3

# إنشاء اتصال بقاعدة البيانات
conn = sqlite3.connect("example.db")

# إنشاء جدول
cursor = conn.cursor()
cursor.execute("""
CREATE TABLE IF NOT EXISTS users (
    id INTEGER PRIMARY KEY,
    name TEXT,
    age INTEGER
)
""")

# إدخال بيانات
cursor.execute("INSERT INTO users (name, age) VALUES (?, ?)", ("Mahmoud", 25))
conn.commit()

# قراءة البيانات
cursor.execute("SELECT * FROM users")
rows = cursor.fetchall()
for row in rows:
    print(row)

conn.close()

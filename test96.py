# Import required libraries
import pandas as pd  # مكتبة لمعالجة البيانات
import matplotlib.pyplot as plt  # مكتبة لإنشاء الرسومات البيانية
import seaborn as sns  # مكتبة لتنسيق الرسومات البيانية

# Step 1: Load the Excel file
# الخطوة الأولى: تحميل ملف الإكسل
# استخدم مكتبة pandas لقراءة ملف الإكسل
file_path = "data.xlsx"  # استبدل هذا باسم ملف الإكسل الخاص بك
data = pd.read_excel(file_path)  # قراءة البيانات من ملف الإكسل
print("Data loaded successfully!")  # عرض رسالة تأكيد

# Step 2: Display basic information about the data
# الخطوة الثانية: عرض معلومات أساسية عن البيانات
print("First 5 rows of the data:")  # عرض أول 5 صفوف من البيانات
print(data.head())  # استخدام دالة head لعرض أول 5 صفوف
print("\nBasic statistics of the data:")  # عرض إحصائيات البيانات
print(data.describe())  # الإحصائيات الأساسية مثل المتوسط والانحراف المعياري

# Step 3: Visualize the data
# الخطوة الثالثة: تمثيل البيانات بيانياً
# إنشاء رسم بياني باستخدام seaborn
plt.figure(figsize=(10, 6))  # تحديد حجم الرسم البياني
sns.boxplot(data=data)  # رسم مخطط الصندوق (Boxplot)
plt.title("Data Distribution")  # عنوان الرسم البياني
plt.show()  # عرض الرسم البياني

# Step 4: Save a summary to a new Excel file
# الخطوة الرابعة: حفظ الملخص في ملف إكسل جديد
summary = data.describe()  # استخراج ملخص البيانات
output_file = "summary.xlsx"  # اسم ملف الإكسل الجديد
summary.to_excel(output_file)  # حفظ الملخص في ملف الإكسل
print(f"Summary saved to {output_file}")  # تأكيد حفظ الملخص

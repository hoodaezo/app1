# Import necessary libraries
# استيراد المكتبات اللازمة
import pandas as pd  # مكتبة لمعالجة البيانات وتحليلها
import matplotlib.pyplot as plt  # مكتبة لرسم المخططات البيانية

# Read the CSV file
# قراءة ملف CSV
# الملف يجب أن يحتوي على بيانات، مثل عمود "العمر" أو "الدرجات"
data = pd.read_csv("G:\excel forms\Gender_Stats_CSV.csv")  # استبدل "data.csv" باسم ملفك مع التأكد من الامتداد

# Display the first 5 rows of the dataset
# عرض أول 5 صفوف من البيانات
print("First 5 rows of data:")
print(data.head())  # دالة تعرض أول 5 صفوف من البيانات

# Check basic information about the data
# عرض معلومات أساسية عن البيانات
print("\nData Summary:")
print(data.info())  # يعرض نوع البيانات وعدد القيم غير الفارغة

# Calculate descriptive statistics
# حساب الإحصائيات الوصفية
print("\nDescriptive Statistics:")
print(data.describe())  # يعرض المتوسط والانحراف المعياري والقيم الأخرى

# Check for missing values
# التحقق من القيم المفقودة
print("\nMissing Values:")
print(data.isnull().sum())  # يعرض عدد القيم المفقودة في كل عمود

# Plot a histogram of a specific column
# رسم مخطط بياني (هيستوجرام) لعمود معين
column_name = "Age"  # استبدل "Age" باسم العمود الذي تريد تحليله
if column_name in data.columns:  # التحقق إذا كان العمود موجودًا في البيانات
    plt.hist(data[column_name].dropna(), bins=10, color='skyblue', edgecolor='black')  # تجاهل القيم المفقودة
    plt.title(f"Histogram of {column_name}")  # عنوان الرسم البياني
    plt.xlabel(column_name)  # اسم المحور السيني
    plt.ylabel("Frequency")  # اسم المحور الصادي
    plt.show()  # عرض الرسم البياني
else:
    print(f"Column '{column_name}' not found in the dataset!")  # طباعة رسالة إذا لم يوجد العمود

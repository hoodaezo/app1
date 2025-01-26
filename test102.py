import pandas as pd
import requests
import io

# URL of the CSV file
url = "https://people.sc.fsu.edu/~jburkardt/data/csv/hw_200.csv"  # استبدل الرابط برابط ملفك الحقيقي

# Download the file using requests
# تنزيل الملف باستخدام requests
response = requests.get(url)

# Check if the request was successful
# التحقق من نجاح الطلب
if response.status_code == 200:
    # Read the content of the file into a pandas DataFrame
    # قراءة محتوى الملف إلى DataFrame باستخدام pandas
    data = pd.read_csv(io.StringIO(response.text))
    
    # Display the first 5 rows of the dataset
    print("First 5 rows of data:")
    print(data.head())  # دالة تعرض أول 5 صفوف من البيانات

    # Check basic information about the data
    print("\nData Summary:")
    print(data.info())  # يعرض نوع البيانات وعدد القيم غير الفارغة

    # Calculate descriptive statistics
    print("\nDescriptive Statistics:")
    print(data.describe())  # يعرض المتوسط والانحراف المعياري والقيم الأخرى

    # Check for missing values
    print("\nMissing Values:")
    print(data.isnull().sum())  # يعرض عدد القيم المفقودة في كل عمود

    # Plot a histogram of a specific column
    column_name = "Age"  # استبدل "Age" باسم العمود الذي تريد تحليله
    if column_name in data.columns:  # التحقق إذا كان العمود موجودًا في البيانات
        plt.hist(data[column_name].dropna(), bins=10, color='skyblue', edgecolor='black')  # تجاهل القيم المفقودة
        plt.title(f"Histogram of {column_name}")  # عنوان الرسم البياني
        plt.xlabel(column_name)  # اسم المحور السيني
        plt.ylabel("Frequency")  # اسم المحور الصادي
        plt.grid(axis='y', linestyle='--', alpha=0.7)  # إضافة شبكة للرسم
        plt.show()  # عرض الرسم البياني
    else:
        print(f"Column '{column_name}' not found in the dataset!")  # طباعة رسالة إذا لم يوجد العمود
else:
    print(f"Failed to download the file. Status code: {response.status_code}")

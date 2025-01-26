import pandas as pd  # مكتبة لتحليل البيانات

# تحميل ملف Excel
file_path = 'hooda'  # اسم ملف Excel
sheet_name = 'Sheet1'  # اسم الورقة داخل Excel

# قراءة البيانات باستخدام pandas
data = pd.read_excel(file_path, sheet_name=sheet_name)

# عرض البيانات
print(data.head())  # يعرض أول 5 صفوف من البيانات

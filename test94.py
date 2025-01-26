# استيراد المكتبات الضرورية
import pandas as pd  # مكتبة لتحليل البيانات
import numpy as np  # مكتبة للعمليات الرياضية
import matplotlib.pyplot as plt  # مكتبة للرسوم البيانية
import seaborn as sns  # مكتبة لتحسين الرسوم البيانية

# تحميل ملف البيانات
# نقوم بتحميل ملف بيانات بصيغة CSV
data = pd.read_excel('https://onedrive.live.com/personal/110469357e3aaf4a/_layouts/15/Doc.aspx?resid=110469357E3AAF4A!s6bb7b79a1edf4e1a89d157a54f5347ea&cid=110469357e3aaf4a&migratedtospo=true&app=Excel')  # استبدل 'data.csv' باسم الملف الخاص بك

# عرض أول 5 صفوف لفهم شكل البيانات
print(data.head())  # يعرض أول 5 صفوف

# تنظيف البيانات:
# 1. حذف الصفوف التي تحتوي على قيم فارغة
data = data.dropna()

# 2. حذف القيم المكررة
data = data.drop_duplicates()

# 3. تغيير أسماء الأعمدة لتسهيل العمل
data.rename(columns={'OldColumnName': 'NewColumnName'}, inplace=True)

# تحليل البيانات:
# حساب المتوسط لكل عمود رقمي
print(data.mean())

# حساب القيم الإحصائية العامة
print(data.describe())

# رسم علاقة بين متغيرين باستخدام Seaborn
sns.scatterplot(x='Column1', y='Column2', data=data)
plt.title('Scatter Plot بين العمودين')
plt.show()

# إنشاء رسم بياني لعدد مرات الظهور
data['ColumnName'].value_counts().plot(kind='bar', color='blue')
plt.title('توزيع القيم في العمود')
plt.show()

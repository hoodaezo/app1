# الهدف من هذا الكود هو تحليل البيانات الزمنية (مثل المبيعات الشهرية) ورسم خط الاتجاه.

import pandas as pd
import matplotlib.pyplot as plt

# تحميل الملف البيانات

# قراءة ملف البيانات (CSV)
# يمكن استبدال "time_series.csv" باسم ملف البيانات الذي يحتوي على التواريخ والقيم الزمنية
try:
    data = pd.read_csv('G:\excel forms\HNP_Stats_CSV', encoding='utf-8')
    print("\u2713 تم قراءة البيانات بنجاح!\n")
except FileNotFoundError:
    print("\u2717 خطأ: ملف البيانات غير موجود! تأكد من وجود الملف في نفس المجلد.\n")
    exit()

# التحقق من وجود العمود الزمني في البيانات
# استبدل "date_column" باسم العمود الذي يحتوي على التواريخ
date_column = 'date_column'
if date_column not in data.columns:
    print(f"\u2717 خطأ: العمود الزمني '{date_column}' غير موجود. تأكد من صحة اسم العمود.\n")
    exit()

# تحويل العمود الزمني إلى نوع datetime للتعامل مع التواريخ بسهولة
try:
    data[date_column] = pd.to_datetime(data[date_column])
    print("\u2713 تم تحويل العمود الزمني بنجاح!\n")
except Exception as e:
    print(f"\u2717 خطأ أثناء تحويل العمود الزمني: {e}\n")
    exit()

# فرز البيانات حسب العمود الزمني لضمان الترتيب الصحيح
data = data.sort_values(by=date_column)

# تعيين العمود الزمني كفهرس (Index) لتحليل أسهل
data.set_index(date_column, inplace=True)

# عرض أول 5 صفوف للتأكد من صحة البيانات
print("\u2726 عرض أول 5 صفوف من البيانات:")
print(data.head())
print("\n")

# رسم خط الاتجاه لقيم محددة
# استبدل "value_column" باسم العمود الذي يحتوي على القيم الزمنية (مثل المبيعات)
value_column = 'value_column'
if value_column in data.columns:
    plt.figure(figsize=(10, 6))  # تحديد حجم الرسم البياني
    plt.plot(data.index, data[value_column], marker='o', linestyle='-', color='blue', label='Trend')
    plt.title('تحليل الاتجاه الزمني', fontsize=14)  # عنوان الرسم
    plt.xlabel('الوقت', fontsize=12)  # تسمية المحور الأفقي
    plt.ylabel('القيم', fontsize=12)  # تسمية المحور الرأسي
    plt.grid(axis='both', linestyle='--', alpha=0.7)  # خطوط الشبكة للمحاور
    plt.legend()  # عرض وسيلة الإيضاح
    plt.show()  # عرض الرسم البياني
else:
    print(f"\u2717 خطأ: العمود '{value_column}' غير موجود في البيانات.")

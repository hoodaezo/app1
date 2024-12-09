import tensorflow as tf
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense, Flatten
from tensorflow.keras.datasets import mnist
from tensorflow.keras.utils import to_categorical

# تحميل البيانات
(x_train, y_train), (x_test, y_test) = mnist.load_data()

# تطبيع البيانات (Normalization)
x_train = x_train / 255.0
x_test = x_test / 255.0

# تحويل التسميات إلى صيغة One-hot Encoding
y_train = to_categorical(y_train, 10)
y_test = to_categorical(y_test, 10)

# إنشاء نموذج الشبكة العصبية
model = Sequential([
    Flatten(input_shape=(28, 28)),  # تحويل الصور ثنائية الأبعاد إلى صف واحد
    Dense(128, activation='relu'),  # طبقة مخفية بها 128 وحدة عصبية
    Dense(64, activation='relu'),   # طبقة مخفية أخرى بها 64 وحدة عصبية
    Dense(10, activation='softmax') # الطبقة النهائية للتصنيف (10 أرقام)
])

# تجميع النموذج
model.compile(optimizer='adam',
              loss='categorical_crossentropy',
              metrics=['accuracy'])

# تدريب النموذج
model.fit(x_train, y_train, epochs=5, batch_size=32)

# تقييم النموذج
test_loss, test_acc = model.evaluate(x_test, y_test)
print(f"Test accuracy: {test_acc}")

# اختبار النموذج على صورة واحدة
import numpy as np
import matplotlib.pyplot as plt

# اختيار صورة من البيانات الاختبارية
index = 0
sample_image = x_test[index]
sample_label = np.argmax(y_test[index])

# توقع النموذج
predicted_label = np.argmax(model.predict(sample_image.reshape(1, 28, 28)))

# عرض الصورة والتوقع
plt.imshow(sample_image, cmap='gray')
plt.title(f"Actual: {sample_label}, Predicted: {predicted_label}")
plt.show()

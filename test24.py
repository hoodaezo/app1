-- إنشاء قاعدة بيانات
CREATE DATABASE ecommerce;

-- استخدام قاعدة البيانات
USE ecommerce;

-- إنشاء جدول المستخدمين
CREATE TABLE users (
    user_id INT AUTO_INCREMENT PRIMARY KEY,# -- رقم المستخدم (رقم تسلسلي)
    name VARCHAR(100) NOT NULL,           # -- اسم المستخدم
    email VARCHAR(100) UNIQUE NOT NULL,    #-- البريد الإلكتروني
    password VARCHAR(255) NOT NULL,       # -- كلمة المرور
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP# -- تاريخ الإنشاء
);

-- إنشاء جدول المنتجات
CREATE TABLE products (
    product_id INT AUTO_INCREMENT PRIMARY KEY, #-- رقم المنتج
    name VARCHAR(100) NOT NULL,               #-- اسم المنتج
    description TEXT,                         #-- وصف المنتج
    price DECIMAL(10, 2) NOT NULL,            #-- سعر المنتج
    stock INT NOT NULL,                       #-- الكمية المتوفرة
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP# -- تاريخ الإضافة
);

-- إنشاء جدول الطلبات
CREATE TABLE orders (
    order_id INT AUTO_INCREMENT PRIMARY KEY,#--# رقم الطلب
    user_id INT NOT NULL,                     #-- رقم المستخدم الذي قام بالطلب
    total_price DECIMAL(10, 2) NOT NULL,      #-- إجمالي السعر
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,# -- تاريخ الطلب
    FOREIGN KEY (user_id) REFERENCES users(user_id) #-- ربط المستخدم بالطلب
);

-- إنشاء جدول تفاصيل الطلب
CREATE TABLE order_details (
    detail_id INT AUTO_INCREMENT PRIMARY KEY, #-- رقم تفصيلي
    order_id INT NOT NULL,                   # -- رقم الطلب
    product_id INT NOT NULL,                 # -- رقم المنتج
    quantity INT NOT NULL,                    #-- الكمية المطلوبة
    price DECIMAL(10, 2) NOT NULL,           # -- السعر لكل منتج
    FOREIGN KEY (order_id) REFERENCES orders(order_id),#3 -- ربط مع الطلب
    FOREIGN KEY (product_id) REFERENCES products(product_id) #-- ربط مع المنتج
);

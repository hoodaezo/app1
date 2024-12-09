#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <fstream> // للتعامل مع الملفات
using namespace std;

// تعريفات الهياكل الأساسية
struct Product {
    int id;
    string name;
    double price;
    int quantity;
};

struct Customer {
    int id;
    string name;
    string phone;
};

struct Order {
    int orderId;
    int customerId;
    vector<int> productIds;
    vector<int> productQuantities; // كميات المنتجات في الطلب
    double totalPrice;
};

// القوائم الرئيسية
vector<Product> products;
vector<Customer> customers;
vector<Order> orders;

// دوال رئيسية

// عرض المنتجات
void displayProducts() {
    if (products.empty()) {
        cout << "No products available.\n";
        return;
    }
    cout << "\nAvailable Products:\n";
    cout << setw(5) << "ID" << setw(20) << "Name" << setw(10) << "Price" << setw(10) << "Stock\n";
    for (const auto& product : products) {
        cout << setw(5) << product.id << setw(20) << product.name << setw(10) << product.price << setw(10) << product.quantity << endl;
    }
}

// إضافة منتج جديد
void addProduct() {
    Product newProduct;
    cout << "Enter product ID: ";
    cin >> newProduct.id;
    cin.ignore();
    cout << "Enter product name: ";
    getline(cin, newProduct.name);
    cout << "Enter product price: ";
    cin >> newProduct.price;
    cout << "Enter product quantity: ";
    cin >> newProduct.quantity;
    products.push_back(newProduct);
    cout << "Product added successfully!\n";
}

// تعديل منتج
void editProduct() {
    int productId;
    cout << "Enter product ID to edit: ";
    cin >> productId;

    for (auto& product : products) {
        if (product.id == productId) {
            cout << "Editing product: " << product.name << endl;
            cout << "Enter new name (current: " << product.name << "): ";
            cin.ignore();
            getline(cin, product.name);
            cout << "Enter new price (current: " << product.price << "): ";
            cin >> product.price;
            cout << "Enter new quantity (current: " << product.quantity << "): ";
            cin >> product.quantity;
            cout << "Product updated successfully!\n";
            return;
        }
    }
    cout << "Product not found.\n";
}

// حذف منتج
void deleteProduct() {
    int productId;
    cout << "Enter product ID to delete: ";
    cin >> productId;

    for (auto it = products.begin(); it != products.end(); ++it) {
        if (it->id == productId) {
            products.erase(it);
            cout << "Product deleted successfully!\n";
            return;
        }
    }
    cout << "Product not found.\n";
}

// تسجيل عميل جديد
void addCustomer() {
    Customer newCustomer;
    cout << "Enter customer ID: ";
    cin >> newCustomer.id;
    cin.ignore();
    cout << "Enter customer name: ";
    getline(cin, newCustomer.name);
    cout << "Enter customer phone: ";
    getline(cin, newCustomer.phone);
    customers.push_back(newCustomer);
    cout << "Customer registered successfully!\n";
}

// عرض العملاء
void displayCustomers() {
    if (customers.empty()) {
        cout << "No customers registered.\n";
        return;
    }
    cout << "\nRegistered Customers:\n";
    cout << setw(5) << "ID" << setw(20) << "Name" << setw(15) << "Phone\n";
    for (const auto& customer : customers) {
        cout << setw(5) << customer.id << setw(20) << customer.name << setw(15) << customer.phone << endl;
    }
}

// إنشاء طلب شراء
void createOrder() {
    if (customers.empty() || products.empty()) {
        cout << "Make sure there are customers and products available before creating an order.\n";
        return;
    }

    Order newOrder;
    cout << "Enter order ID: ";
    cin >> newOrder.orderId;
    cout << "Enter customer ID: ";
    cin >> newOrder.customerId;

    int productId, quantity;
    while (true) {
        cout << "Enter product ID to add to the order (or -1 to finish): ";
        cin >> productId;
        if (productId == -1)
            break;

        bool found = false;
        for (auto& product : products) {
            if (product.id == productId && product.quantity > 0) {
                cout << "Enter quantity: ";
                cin >> quantity;
                if (quantity > product.quantity) {
                    cout << "Insufficient stock. Only " << product.quantity << " available.\n";
                    continue;
                }
                newOrder.productIds.push_back(productId);
                newOrder.productQuantities.push_back(quantity);
                newOrder.totalPrice += product.price * quantity;
                product.quantity -= quantity; // تقليل الكمية المتوفرة
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Product not found or out of stock.\n";
        }
    }

    if (!newOrder.productIds.empty()) {
        orders.push_back(newOrder);
        cout << "Order created successfully with total price: " << newOrder.totalPrice << "\n";
    } else {
        cout << "Order creation failed. No products were added.\n";
    }
}

// عرض الطلبات
void displayOrders() {
    if (orders.empty()) {
        cout << "No orders available.\n";
        return;
    }

    cout << "\nOrders:\n";
    for (const auto& order : orders) {
        cout << "Order ID: " << order.orderId << ", Customer ID: " << order.customerId << ", Total Price: " << order.totalPrice << endl;
        cout << "Products in this order:\n";
        for (size_t i = 0; i < order.productIds.size(); ++i) {
            cout << "  Product ID: " << order.productIds[i] << ", Quantity: " << order.productQuantities[i] << endl;
        }
    }
}

// القائمة الرئيسية
int main() {
    int choice;

    do {
        cout << "\nE-commerce Management System\n";
        cout << "1. Add Product\n";
        cout << "2. Edit Product\n";
        cout << "3. Delete Product\n";
        cout << "4. Display Products\n";
        cout << "5. Register Customer\n";
        cout << "6. Display Customers\n";
        cout << "7. Create Order\n";
        cout << "8. Display Orders\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addProduct();
                break;
            case 2:
                editProduct();
                break;
            case 3:
                deleteProduct();
                break;
            case 4:
                displayProducts();
                break;
            case 5:
                addCustomer();
                break;
            case 6:
                displayCustomers();
                break;
            case 7:
                createOrder();
                break;
            case 8:
                displayOrders();
                break;
            case 9:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 9);

    return 0;
}

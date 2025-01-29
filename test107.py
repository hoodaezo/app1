# Importing required libraries
import pandas as pd
import matplotlib.pyplot as plt

# Reading the sales data from a CSV file
try:
    data = pd.read_csv(r'G:\vib codeing\python project\python\HNP_StatsCSV.csv')  # تحديث المسار باستخدام r
    print("Data loaded successfully!")
except FileNotFoundError:
    print("Error: File not found. Please check the file path.")
    exit()

# Displaying the first few rows of the data
print("First few rows of the dataset:")
print(data.head())

# Displaying available columns
print("\nAvailable columns in the dataset:")
print(data.columns)

# Checking for required columns
required_columns = ['Price', 'Quantity', 'Product']
missing_columns = [col for col in required_columns if col not in data.columns]
if missing_columns:
    print(f"Error: Missing columns in the dataset: {missing_columns}")
    exit()

# Calculating total sales
data['Total Sales'] = data['Price'] * data['Quantity']

# Summarizing the total sales
total_sales = data['Total Sales'].sum()
print(f"\nTotal Sales: {total_sales}")

# Analyzing the top-selling products
top_products = data.groupby('Product')['Total Sales'].sum().sort_values(ascending=False)
print("\nTop-Selling Products:")
print(top_products)

# Visualizing the sales distribution
top_products.plot(kind='bar', title='Top-Selling Products', xlabel='Product', ylabel='Total Sales', color='skyblue')
plt.show()

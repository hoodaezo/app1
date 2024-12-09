import sqlite3

# Create a connection object

conn = sqlite3.connect('employees.db1')

# Create a cursor object

cursor = conn.cursor()

# Create a table

cursor.execute('''CREATE TABLE employees
                  (id INTEGER PRIMARY KEY, name TEXT NOT NULL,
                  department TEXT NOT NULL, salary REAL NOT NULL)''')

# Insert data into the table

cursor.execute("INSERT INTO employees VALUES (1, 'John Doe', 'IT', 60000.00)")

cursor.execute("INSERT INTO employees VALUES (2, 'Jane Smith', 'HR', 55000.00)")

cursor.execute("INSERT INTO employees VALUES (3, 'Alice Johnson', 'Finance', 65000.00)")

# Commit the changes

conn.commit()

# Close the connection

conn.close()

print("Data inserted successfully")

# Query the data

conn = sqlite3.connect('employees.db')

cursor = conn.cursor()

cursor.execute("SELECT * FROM employees")

rows = cursor.fetchall()

for row in rows:
    print(row)

conn.close()
print("Data retrieved successfully")
print("Database closed successfully")

# Update the data

conn = sqlite3.connect('employees.db')

cursor = conn.cursor()

cursor.execute("UPDATE employees SET salary = 68000.00 WHERE id = 1")

conn.commit()

conn.close()

print("Data updated successfully")

# Delete the data

#conn = sqlite3.connect('employees.db')

#cursor = conn.cursor()

#cursor.execute("DELETE FROM employees WHERE id = 3")

#conn.commit()

#conn.close()

print("Data deleted successfully")

print("Database closed successfully")

# Query the data after updates

conn = sqlite3.connect('employees.db')

cursor = conn.cursor()

cursor.execute("SELECT * FROM employees")

rows = cursor.fetchall()

for row in rows:
    print(row)

conn.close()

print("Data retrieved successfully")

print("Database closed successfully")

print("All operations completed successfully")

# Close the connection

conn.close()






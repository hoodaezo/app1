# Summary statistics
print(data.describe())

# Visualize the distribution of age
plt.figure(figsize=(10, 6))
sns.histplot(data['age'], bins=30, kde=True)
plt.title('Age Distribution')
plt.show()

# Visualize survival rate based on sex
plt.figure(figsize=(10, 6))
sns.barplot(x='sex', y='survived', data=data)
plt.title('Survival Rate by Sex')
plt.show()

# Visualize survival rate based on class
plt.figure(figsize=(10, 6))
sns.barplot(x='pclass', y='survived', data=data)
plt.title('Survival Rate by Class')
plt.show()
# Create a new feature: family_size
data['family_size'] = data['sibsp'] + data['parch'] + 1

# Visualize survival rate based on family size
plt.figure(figsize=(10, 6))
sns.barplot(x='family_size', y='survived', data=data)
plt.title('Survival Rate by Family Size')
plt.show()
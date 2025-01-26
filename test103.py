import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt

# Load the Titanic dataset
data = sns.load_dataset('titanic')

# Display the first few rows of the dataset
print(data.head())

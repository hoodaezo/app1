
with open("file.txt", "r") as file:
    content = file.read()
    print(content)

with open("file.txt", "a") as file:
    file.write("\nhoodaez")
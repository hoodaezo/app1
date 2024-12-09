import random
import string

def generate_password():
    length = int(input("enter password : "))
    characters = string.ascii_letters + string.digits + string.punctuation
    password = ''.join(random.choice(characters) for _ in range(length))

    print(f"enter password : {password}")

generate_password()

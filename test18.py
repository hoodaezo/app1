def calcoulator()

num1="number1"
num2="number2"
char="opretor"

print(float(input("enter frist num    :")))

print (float(input("enter second num  :")))

print("choose operator   (+,-,*,/)      :")

char=input("enter opretor")
choice = input("Enter choice (1/2/3/4): ")

if choice=='+':
    return print(f"result :{num1+num2}")

elif char=='-':
    return print(f"{num1-num2}")

elif char=='*': 
    
    return print(f"{num1*num2}")

elif char=='/':
    
    return print(f"{num1/num2}")
else:
    num2!==0:
        print("Error: Division by zero is not allowed.")
         
         
         calcoulator()
         
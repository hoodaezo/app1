import random

def number_guessing_game():
    print("welcom to guesing number game !")

    print(" choice number between (1:100) !")
    input("enter your name : ")
    
    
    secrret_number= random.randint (1, 100)
    attempts = 5
    
    
    print("you have 5 attempts to guess the number")
    while True:
        try:
            user_guess=int(input("enter numper  :" ))
            attempts += 1
            
            if user_guess < secrret_number:
                print("your guess is low")
            elif user_guess > secrret_number:
                print("your guess is high")
            else:
             print(f"congratulation, you got it right in {attempts} attempts! ,{name} name")
            break
        except ValueError:
            
            print("that's not a number, please try again!")
            
            
            
            
number_guessing_game( )                   
        

     
def km_to_miles(km):
    return km * 0.621371

def celsus_to_farenheit(clesius):
    return celsius * 9/5 + 32

print ("choice what you need :")
print ("1. km to miels :")
print (" 2. slesus to fernheit")

chocie = input(" enter your choice (1,2)  :")

if chocie == '1':
    km = float(input("enter km : "))
    result = km_to_miles
    print (f"{km} km is equal to {result} miles")
    
elif chocie =='2':
    celsius = float(input("enter celsius : "))
    result =celsus_to_farenheit
    print (f"{celsius} celsius is equal to {result} farenheit")   
    
else:   
    print ("your choice is not valid")

person = {
    "name": "hoodaez",
    "age": 30,
    "city": "alexcandya"
}

# إضافة عنصر جديد


def updat_of_person(): 
    person['phon number']=1234567895
    person['address'] = '123 street'
    print(f"phone number: {person['phon number']}")
    print(f"address :{person['address']}")


def favoret_foods():
    person['favorite foods'] = ['pizza', 'burger', 'french fries']
    print(f"favorite foods: {person['favorite foods']}")   
    print(favoret_foods[1])
     
person["job"] = "Engineer"
person['phon number '] =1245025652
person['address'] ='123 street'
person['favorite foods'] ='1'
person[ 'married']='0'
# الوصول إلى قيمة
print(f" nama: {person['name']}")
print(f"job :{person['job']}")
print(f"age : {person['age']}")
print(f"phone number : {person['phon number ']}")
print(f"address :{person['address']}")
print(f"favorit foods :{person['favorite foods']}")
print(f'married :{person["married"]}')

updat_of_person()
favoret_foods()
class Student:
    def __init__(self, name, age, grade):
        self.name = name
        self.age = age
        self.grade = grade

    def get_details(self):
        # يجب إرجاع النص هنا لتعمل الدالة بشكل صحيح
        return f"Name: {self.name}, Age: {self.age}, Grade: {self.grade}"

    def is_passed(self):
        # يمكنك تحسين هذه الدالة لجعلها أكثر بساطة\
            if self.grade>=50:
                return "Passed"
            elif self.grade<=60:
                return "good"
            elif self.grade<=70:
                return "very good"
            elif self.grade <=80:
                return "exclant"
            elif self.grade <=100: 
                return "perfect"
            else:
                return "invalid grade"
    


# إنشاء كائن من الكلاس
Student1=Student("Hooda", 30, 90)
Student2=Student("salma" ,52 ,40)
Student3=Student("sama" ,34 ,50)
Student4= Student("rehab" ,6 ,30)


# طباعة التفاصيل
print(Student1.get_details())
print(Student2.get_details())
print(Student3.get_details())
print(Student4.get_details())
# التحقق من نجاح الطالب
print(Student1.is_passed())
print(Student2.is_passed())
print(Student3.is_passed())
print(Student3.is_passed())  
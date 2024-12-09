class student:
    def __init__(self, name, age, grade):
        self.name= name
        self.age=age
        self.grade=grade
       # return f' Name: {self.name}, Age: {self.age}, Grade: {self.grade}'
    
    
    
    def get_details( self):
        return f' Name: {self.name}, Age: {self.age}, Grade: {self.grade}'
    
    def is_passed(self):
        return self.grade >= 50
    
    def update_grade(self, new_grade):
        self.grade = new_grade
        if 0<= new_grade <=100:
            return f'Grade updated to {new_grade}'
        else:
            return 'Invalid grade. Grade should be between 0 and 100.'
        
    def age_group(self):
        if self.age >= 18 and self.age<=25:
            return 'Adult (18-25)'                    
        elif self.age >= 26 and self.age<=35:
            return 'Middle-aged (26-35)'
        elif self.age >= 36   and self.age<=45:
            return 'Senior (36-45)'
        
def calculate_average(students):
    total_grades = sum(student.grade for student in students)
    return total_grade / len(student) if student else 0   


student1 = student("Hooda", 30, 90)
student2 = student("Salma", 16, 40)
student3 = student("Sama", 14, 80)
student4 = student("Rehab", 10, 100)

students = [student1, student2, student3, student4]
     
for student in students:
    print(student.get_details())
    print(f"Evaluation: {student.is_passed()}")
    print(f"Age Group: {student.age_group()}")
    print("-" * 30)

اب
print(student2.update_grade(85))

# حساب متوسط درجات الطلاب
average_grade = calculate_average(students)
print(f"\nThe average grade of all students is: {average_grade:.2f}")

class Employee:
    def __init__(self, emp_id, name, position, salary, experience_years):
        self.emp_id = emp_id
        self.name = name
        self.position = position
        self.salary = salary
        self.experience_years = experience_years

    def get_details(self):
        # إرجاع تفاصيل الموظف
        return (
            f"ID: {self.emp_id}, Name: {self.name}, Position: {self.position}, "
            f"Salary: ${self.salary:.2f}, Experience: {self.experience_years} years"
        )

    def calculate_bonus(self):
        # حساب المكافأة بناءً على سنوات الخبرة
        if self.experience_years < 2:
            return 0.05 * self.salary  # 5% من الراتب
        elif self.experience_years <= 5:
            return 0.10 * self.salary  # 10% من الراتب
        else:
            return 0.15 * self.salary  # 15% من الراتب

    def promote(self, new_position, salary_increase):
        # ترقية الموظف
        self.position = new_position
        self.salary += salary_increase
        return f"{self.name} has been promoted to {self.position} with a new salary of ${self.salary:.2f}."


# إنشاء كائنات من الكلاس
employee1 = Employee(101, "Ahmed", "Junior Developer", 4000, 1)
employee2 = Employee(102, "Sara", "Team Leader", 8000, 4)
employee3 = Employee(103, "Omar", "Manager", 15000, 7)
employee4 = Employee(104, "Mona", "Intern", 2000, 0)

# وضع الموظفين في قائمة
employees = [employee1, employee2, employee3, employee4]

# طباعة تفاصيل الموظفين
for employee in employees:
    print(employee.get_details())
    print(f"Bonus: ${employee.calculate_bonus():.2f}")    
    print("-" * 30)

# دالة لحساب إجمالي الرواتب
def calculate_total_salary(employees):  
    return sum(employee.salary for employee in employees)

# حساب إجمالي الرواتب
total_salary = calculate_total_salary(employees)
print(f"\nThe total salary of all employees is: ${total_salary:.2f}")

# ترقية أحد الموظفين
print(employee1.promote("Mid-Level Developer", 2000))

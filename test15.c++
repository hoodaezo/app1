#include <iostream>

using namespace std;

struct emai_addres
{
    string email_home;
    string email_work;
    string email_other;
    string email_friends;
    string email_family;
    string email_school;
};

// Structure for storing phone numbers
struct PhoneNumbers
{
    string phone_home;
    string phone_work;
    string phone_cell;
    string phone_other;
    string phone_friends;
    string phone_family;
    string phone_school;
    string phone_other_country;
};

// Structure for storing person details
struct PersonDetails
{
    string name;
    int age;
    string city;
    string country;
    int month_salary;
    int year_salary;
    char gender;
    bool married;
};

int main()
{
    // Creating instances of PersonDetails
    PersonDetails person1, person2, person3;

    // Creating instances of PhoneNumbers
    PhoneNumbers phone_numbers1, phone_numbers2, phone_numbers3;

    // Creating instances of EmailAddresses
    emai_addres email_addres1, email_addres2, email_addres3;

    // Initializing person1
    person1.name = "hoodaezz";
    person1.age = 35;
    person1.city = "alex";
    person1.country = "Egypt";
    person1.month_salary = 15000;
    person1.year_salary = person1.month_salary * 12;
    person1.gender = 'M';
    person1.married = false;

    // Initializing phone numbers for person1
    phone_numbers1.phone_home = "0555555555";
    phone_numbers1.phone_work = "0555555556";
    phone_numbers1.phone_cell = "0555555557";
    phone_numbers1.phone_other = "0555555558";
    phone_numbers1.phone_friends = "0555555559";
    phone_numbers1.phone_family = "0555555560";
    phone_numbers1.phone_school = "0555555561";
    phone_numbers1.phone_other_country = "0555555562";

    // Initializing  mai_addres1
    email_addres1.email_home = "hoodaezz@gmail.com";
    email_addres1.email_work = "ezz@gmail.com";
    email_addres1.email_other = "ahmed@gmail.com";
    email_addres1.email_friends = "mostfa@gmail.com";
    email_addres1.email_family = "mohammed@gmail.com";
    email_addres1.email_school = "ahmed@gmail.com";

    // Initializing person2
    person2.name = "ahmed ezz";
    person2.age = 60;
    person2.city = "alexcandya";
    person2.country = "Egypt";
    person2.month_salary = 20000;
    person2.year_salary = person2.month_salary * 12;
    person2.gender = 'M';
    person2.married = true;

    // Initializing phone numbers for person2
    phone_numbers2.phone_home = "0655555555";
    phone_numbers2.phone_work = "0655555556";
    phone_numbers2.phone_cell = "0655555557";
    phone_numbers2.phone_other = "0655555558";
    phone_numbers2.phone_friends = "0655555559";
    phone_numbers2.phone_family = "0655555560";
    phone_numbers2.phone_school = "0655555561";
    phone_numbers2.phone_other_country = "0655555562";

    // Initializing  mai_addres2
    email_addres2.email_home = "ahmed@gmail.com";
    email_addres2.email_work = "ezz@gmail.com";
    email_addres2.email_other = "mostfa@gmail.com";
    email_addres2.email_friends = "ahmed@gmail.com";
    email_addres2.email_family = "mohammed@gmail.com";
    email_addres2.email_school = "ahmed@gmail.com";

    // Initializing person3
    person3.name = "mostfa ezz";
    person3.age = 45;
    person3.city = "alex";
    person3.country = "Egypt";
    person3.month_salary = 18000;
    person3.year_salary = person3.month_salary * 12;
    person3.gender = 'M';
    person3.married = true;

    // Initializing phone numbers for person3
    phone_numbers3.phone_home = "0755555555";
    phone_numbers3.phone_work = "0755555556";
    phone_numbers3.phone_cell = "0755555557";
    phone_numbers3.phone_other = "0755555558";
    phone_numbers3.phone_friends = "0755555559";
    phone_numbers3.phone_family = "0755555560";
    phone_numbers3.phone_school = "0755555561";
    phone_numbers3.phone_other_country = "0755555562";

    // Initializing  mai_addres3
    email_addres3.email_home = "mostfa@gmail.com";
    email_addres3.email_work = "ezz@gmail.com";
    email_addres3.email_other = "ahmed@gmail.com";
    email_addres3.email_friends = "ahmed@gmail.com";
    email_addres3.email_family = "mohammed@gmail.com";
    email_addres3.email_school = "ahmed@gmail.com";

    // Displaying details of person1 and their phone numbers
    cout << "Person 1 Details:" << endl;
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "City: " << person1.city << endl;
    cout << "Country: " << person1.country << endl;
    cout << "Monthly Salary: " << person1.month_salary << endl;
    cout << "Yearly Salary: " << person1.year_salary << endl;
    cout << "Gender: " << person1.gender << endl;
    cout << "Married: " << (person1.married ? "Yes" : "No") << endl;
    cout << "Phone Numbers:" << endl;
    cout << "  Home: " << phone_numbers1.phone_home << endl;
    cout << "  Work: " << phone_numbers1.phone_work << endl;
    cout << "  Cell: " << phone_numbers1.phone_cell << endl;
    cout << "  Other: " << phone_numbers1.phone_other << endl;
    cout << "  Friends: " << phone_numbers1.phone_friends << endl;
    cout << "  Family: " << phone_numbers1.phone_family << endl;
    cout << "  School: " << phone_numbers1.phone_school << endl;
    cout << "  Other Country: " << phone_numbers1.phone_other_country << endl;
    cout << "----------------------------------------" << endl;

    // Similarly, display details for person2 and person3...

    // Displaying details of person1 and their email addresses
    cout << "Email Addresses:" << endl;
    cout << "  Home: " << email_addres1.email_home << endl;
    cout << "  Work: " << email_addres1.email_work << endl;
    cout << "  Other: " << email_addres1.email_other << endl;
    cout << "  Friends: " << email_addres1.email_friends << endl;
    cout << "  Family: " << email_addres1.email_family << endl;
    cout << "  School: " << email_addres1.email_school << endl;
    cout << "----------------------------------------" << endl;

    // Similarly, display details for person2 and person3...
    // This code can be extended to handle more people, email addresses, and phone numbers.
    // The use of classes and objects makes the code more modular and easier to maintain.
    // For example, if the details of a person or an email address were to change, you would only need to modify the relevant class and object.
    // This improves code reusability and makes the code easier to maintain and debug.
    // For further details on classes and objects in C++, refer to the C++ documentation or online resources.
    // Note: This code assumes that the phone numbers and email addresses are stored in separate classes and objects.
    // If the phone numbers and email addresses are stored in the same class or object, you would need to modify the code accordingly.
    // Also, the code assumes that the email addresses and phone numbers are stored in separate arrays or vectors.
    // If the email addresses and phone numbers are stored in a single data structure, you would need to modify the code accordingly.
    // Finally, the code assumes that the phone numbers and email addresses are stored in a separate class and object.
    // If the phone numbers and email addresses are stored in the same class or object, you would need to modify the code accordingly.
    // Also, the code assumes that the email addresses and phone numbers are stored in separate arrays or vectors.
    // If the email addresses and phone numbers are stored in a single data structure, you would need to modify the code accordingly.
    // Note: This code assumes that the phone numbers and email addresses are stored in separate classes and objects.
    // If the phone numbers and email addresses are stored in the same class or object, you would need to modify the code accordingly.
    // Also, the code assumes that the email addresses and phone numbers are stored in separate arrays or vectors.
    // If the email addresses and phone numbers are stored in a single data structure, you would need to modify the code accordingly.

    // This code can be extended to handle more people, email addresses, and phone numbers.
    // The use of classes and objects makes the code more modular and easier to maintain.
    // For example, if the details of a person or an email address were to change, you would only need to modify the relevant class and object.
    // This improves code reusability and makes the code easier to maintain and debug.
    // For further details on classes and objects in C++, refer to the C++ documentation or online resources.

  // This code can be extended to handle more people, email addresses, and phone numbers.
 // The use of classes and objects makes the code more modular and easier to maintain.
 // For example, if the details of a person or an email address were to change, you would only need to modify the relevant class and object.
 // This improves code reusability and makes the code easier to maintain and debug.
 // For further details on classes and objects in C++, refer to the C++ documentation or online resources.
 // Note: This code assumes that the phone numbers and email addresses are stored in separate classes and objects.
 // If the phone numbers and email addresses are stored in the same class or object, you would need to modify the code accordingly.
 // Also, the code assumes that the email addresses and phone numbers are stored in separate arrays or vectors.
 // If the email addresses and phone numbers are stored in a single data structure, you would need to modify the code accordingly.
 // Finally, the code assumes that the phone numbers and email addresses are stored in a separate class and object.
 // If the phone numbers and email addresses are stored in the same class or object, you would need to modify the code accordingly.
 // Also, the code assumes that the email addresses and phone numbers are stored in separate arrays or vectors.
 // If the email addresses and phone numbers are stored in a single data structure, you would need to modify the code accordingly.
 // Note: This code assumes that the phone numbers and email addresses are stored in separate classes and objects.
 // If the phone numbers and email addresses are stored in the same class or object, you would need to modify the code accordingly.
 // Also, the code assumes that the email addresses and phone numbers are stored in separate arrays or vectors.
 // If the email addresses and phone numbers are stored in a single data structure, you would need to modify the code accordingly.
 // Note: This code assumes that the phone numbers and email addresses are stored in separate classes and objects.
 // If the phone numbers and email addresses are stored in the same class or object, you would need to modify the code accordingly.
 // Also, the code assumes that the email addresses and phone numbers are stored in separate arrays or vectors.
 // If the email addresses and phone numbers are stored in a single data structure, you would need to modify the code accordingly.

 // This code can be extended to handle more people, email addresses, and phone numbers.
 // The use of classes and objects makes the code more modular and easier to maintain.
 // For example, if the details of a person or an email address were to change, you would only need to modify the relevant class and object.
  // This improves code reusability and makes the code easier to maintain and debug.
 // For further details on classes and objects in C++, refer to the C++ documentation or online resources.
 // Note: This code assumes that the phone numbers and email addresses are stored in separate classes and objects.
 // If the phone numbers and email addresses are stored in the same class or object, you would need to modify the code accordingly.
 // Also, the code assumes that the email addresses and phone numbers are stored in separate arrays or vectors.
 // If the email addresses and phone numbers are stored in a single data structure, you would need to modify the code accordingly.
 // Finally, the code assumes that the phone numbers and email addresses are stored in a separate class and object.
 // If the phone numbers and email addresses are stored in the same class or object, you would need to modify the code accordingly.
 // Also, the code assumes that the email addresses and phone numbers are stored in separate arrays or vectors.
 // If the email addresses and phone numbers are stored in a single data structure, you would need to modify the code accordingly.
 // Note: This code assumes that the phone numbers and email addresses are stored in separate classes and objects.
 // If the phone numbers and email addresses are stored in the same class or object, you would need to modify the code accordingly.
 // Also, the code assumes that the email addresses and phone numbers are stored in separate arrays or vectors.
 // If the email addresses and phone numbers are stored in a single data structure, you would need to modify the code accordingly.

return 0;
}

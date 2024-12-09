#include <iostream>
#include <string>

enum ennumber { one, two, three, four, five };
enum enweek { sat, sun, mon, tue, wed, fri };
enum encolor { red, blue, green };

struct ststreet {
    std::string namestreet;
    int numberstreet;
    encolor colorstreet;
    int numbstreet;
    ennumber numbnumb;
    enweek dayweek;
    encolor colorcolor;
};

struct stcontact {
    std::string phonenumber;
    std::string email;
    ststreet address;
};

struct stperson {
    std::string name;
    int age;
    encolor favoritecolor;
    stcontact contact;
    ststreet street;
};

int main() {
    stperson person;

    person.name = "Hoodaez";
    person.age = 35;
    person.favoritecolor = red;

    person.contact.phonenumber = "123-456-789";
    person.contact.email = "hoodaez@example.com";

    person.street.namestreet = "Tahir Street";
    person.street.numberstreet = 12;
    person.street.colorstreet = red;
    person.street.numbstreet = 1; // قيمة صحيحة
    person.street.numbnumb = one;
    person.street.dayweek = mon;
    person.street.colorcolor = blue;

    std::cout << "Name: " << person.name << std::endl;
    std::cout << "Age: " << person.age << std::endl;
    std::cout << "Favorite Color: " << person.favoritecolor << std::endl;
    std::cout << "Phone: " << person.contact.phonenumber << std::endl;
    std::cout << "Email: " << person.contact.email << std::endl;
    std::cout << "Street Name: " << person.street.namestreet << std::endl;

    return 0;
}

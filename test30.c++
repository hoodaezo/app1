#include <iostream>
using namespace std;

string your_name = "hoodaezo";
string your_addres = "alexcandrya";

void person_id()
{
     cout << " your name is  mahmoud ahmed" << endl;
     cout << "your addres is  tahir street" << endl;
}
string personid()
{

     string frist_name = "eldoood ";
     string addres = "elamrya st";
     // string emal= " hoodaez@yahoo.com"
     return "frist_name:" + frist_name + ",addres  :" + addres + ",emal : " + emal;
}

int main()
{
     cout << "First Name is(global)  : " << your_name << endl;
     cout << "Address is (global) : " << your_addres << endl;

     person_id();

     cout << "ditels(local) : " << personid() << endl;

     return 0;
}
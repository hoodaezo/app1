#include <iostream>
#include <string>

using namespace std;

int main() {
 int grade ;
 cout<<"enter nomber  of 0 to 100   :" ;
 cin>>grade ;
if(grade < 0 || grade>100)
{
    cout<<"grade is A "<<endl;
    cout<<"exlant"  <<endl;
}   
    else if (grade >=90)
{    
    cout<<"grade is B "<<endl;
    cout<<"exlant"  <<endl;
    
}
   else if (grade >=80 )
{
    cout<<"grade is C "<<endl;
    cout<<"exlant"  <<endl;
    
}
 else if (grade >=70)
 {
    cout<<"grade is D "<<endl;
    
    cout<<"exlant"  <<endl;
 }
else if(grade >=60)
{
    cout<<"grade is E "<<endl;
    
    cout<<"exlant"  <<endl;
}
 else if(grade >=50)
{
    cout<<"grade is F "<<endl;
    
    cout<<"not exlant"  <<endl;
}
else if(grade >=40)
{
    cout<<"grade is F "<<endl;
    
    cout<<"not exlant"  <<endl;
}

else if(grade >=30)
{
    cout<<"grade is D "<<endl;
    
    cout<<"not exlant" <<endl;
}

else if(grade >=20)
{
    cout<<"grade is C "<<endl;
    
    cout<<"not exlant"  <<endl;
}

else if(grade >=10)
{
    cout<<"grade is B "<<endl;

    cout<<"not exlant"  <<endl;
}

else if(grade >=0)
{

    cout<<"grade is A "<<endl;
    
    cout<<"not exlant"  <<endl;
}


    return 0;
}
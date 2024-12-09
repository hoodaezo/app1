#include <iostream>
#include <string>

using namespace std;

struct  student
{   string name;
    int age;
    float grde;
};

void valuatestudent (student & student)

 {
    cout<< "enter grde the student  :\n";
    

    if (student.grade>=85)
    {
        cout<<student.name<<"exlant"<<endl;  
    }
    else if (student.grade >=70)
    {
        cout<<student.name<<"exlant"<<endl;  
    }
     else if (student.grade >=50)
    {
         cout<<student.name<<"exlant"<<endl;  
    }
   else
         {
        cout<<student.name<<"not exlant"<<endl;

    }
  
}


int main(){
     student  stdout;
     cout<<"enter name : ";
     cin>>stdout.name;
     cout<<"enter age : ";
     cin>>stdout.age;
     cout<<"enter grde : ";
     cin>>stdout.grade;
    
     valuatestudent(stdout);



     return 0;

}
#include<iostream>
#include<string>

using namespace std;

struct studintinfo

{string name_studint;

 int id_studint;
 
 string department_studint;
    
};
 
 void inputinfo(studintinfo &inputinfo)
 {
    cout<<"Enter the name of the student  :";
    cin>>inputinfo.name_studint;
    cout<<"Enter the ID of the student  :";
    cin>>inputinfo.id_studint;
    cout<<"Enter the department of the student  :";
    cin>>inputinfo.department_studint;
 }
 void outputinfo(studintinfo &outputinfo)
 {
    cout<<"Name of the student: "<<outputinfo.name_studint<<endl;
    cout<<"ID of the student: "<<outputinfo.id_studint<<endl;
    cout<<"Department of the student: "<<outputinfo.department_studint<<endl;
 }
 void inputinfo(studintinfo studint[2])
 {cout<<"\n****************************\n";
    inputinfo(studint[0]);
    inputinfo(studint[1]);
    cout<<"\n****************************\n";
 }
 void outputinfo(studintinfo studint[2])
 {   cout<<"\n****************************\n";
    outputinfo(studint[0]);
    outputinfo(studint[1]);
    cout<<"\n****************************\n";
 }
int main()
{
studintinfo (studint[2]);

inputinfo(studint);

outputinfo(studint);





    return 0;
}
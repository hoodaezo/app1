#include <iostream>
#include <string>

using namespace std;



struct  person_info
{
    string name;
    int age;
    char gender;
};
void read_info(person_info &info)
{
 cout<<"enter your name  :"<< info.name<<endl;
 cin.ignore();
 getline(cin, info.name );

 cout<<"enter your age  :"<<info.age<<endl;
 cin>>info.age;

 cout<<"enter your gender (M/F) :"<<info.gender<<endl;
 cin>>info.gender;

}

void print_info(person_info  info){
    cout<<"your name is :"<<info.name<<endl;
    cout<<"your age is :"<<info.age<<endl;
    cout<<"your gender is :"<<info.gender<<endl;

}

int main(){
    person_info person;
    read_info(person);
    print_info(person);








return 0;   
}
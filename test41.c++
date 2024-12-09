#include <iostream>
#include <string>

using namespace std;

struct stringinfo
{
    string fristname ;
    string lastname ;
    string phone;
};

void readinfo(stringinfo &readinfo)
{   cout<<"\n*******************************\n";
    cout<<"enter your name\n";
    cin>>readinfo.fristname;
    cout<<"enter your last name\n";
    cin>>readinfo.lastname;
    cout<<"enter your phone\n";
    cin>>readinfo.phone;
    cout<<"\n*******************************\n";
} 

void printinfo(stringinfo readinfo)
{ cout<<"\n*******************************\n";
    cout<<readinfo.fristname<<endl; 
    cout<<readinfo.lastname<<endl;
    cout<<readinfo.phone<<endl;
cout<<"\n*******************************\n";
} 

void readworkerinfo(stringinfo worker[2] )
{
    readinfo(worker[0]);
    readinfo(worker[1]);
}

void printworker(stringinfo worker[2])
{
    printinfo(worker[0]);
    printinfo(worker[1]);
}

int main(){
    stringinfo worker[2];
    readworkerinfo(worker);
    printworker(worker);
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

struct worker
{
 string name_worker;
 int   id_worker;
 int salary_worker;   
 } ;
 
 void read_info(worker&go )
{
cout <<"name the worker";
cin>>go.name_worker;

cout <<"id the worker";
cin>>go.id_worker;

cout <<"salary the worker";
cin>>go.salary_worker;
}
 void print_info( worker go)
 {
 cout<<"read info worker"<<go.name_worker <<endl;
 cout<<"read info worker"<<go.id_worker<<endl;
 cout<<"read info worker"<<go.salary_worker <<endl;
 }

 void read_info(worker[2])
{
  read_info(worker[0]);
  read_info(worker[1]);

  }
  void print_info(worker go[2])
 {
    print_info(worker[0]);
    print_info(worker[1]);
 }

int main(){
 string worker[2];
 read_info(worker);
 print_info(worker);
return 0;
}

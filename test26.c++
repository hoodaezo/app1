#include<iostream>
using namespace std;


void sumintegar ()
{  int num1 ,num2 ;
  cout<<"enter nmber 1:"<<num1<< endl;
  cin>>num1;
  cout<<"enter nmber 2:"<<num2<< endl;
  cin>>num2;
  cout<<"the sum of "<<num1<<" and "<<num2<<" is "<<num1+num2<<endl;

}
void informatio(){
    cout<<"hello world"<<endl;
    cout<<"this is a c++ program"<<endl;
    cout<<"this program calculates the sum of two numbers"<<endl;
    cout<<"the sum is displayed below:"<<endl;
    sumintegar();
}
void address(){
    cout<<"my address is:"<<endl;
    cout<<"123 street name"<<endl;
    cout<<"city, state, zip code"<<endl;
    cout<<"this program was created by me"<<endl;
    informatio();
}
void addes(){
    float num1,num2, num3,num4 ;

    cout<<"enter nmber 1:"<<num1<< endl;
    cin>>num1;
    cout<<"enter nmber 2:"<<num2<< endl;
    cin>>num2;
    cout<<"enter nmber 3:"<<num3<< endl;
    cin>>num3;
    cout<<"enter nmber 4:"<<num4<< endl;
    cin>>num4;
    cout<<" total   : "<<num1+num2-num3+num4<<endl;

      address ();

}
int faction(){

    int num1,num2, result;
    cout<<"enter nmber 1:"<<num1<< endl;
    cin>>num1;
    cout<<"enter nmber 2:"<<num2<< endl;
    cin>>num2;
    result = num1 * num2;
    cout<<"the multiplication of "<<num1<<" and "<<num2<<" is "<<result<<endl;
    return result;
}

string fuition1(){
    string str1,str2;
    cout<<"enter first string:"<<str1<< endl;
    cin>>str1;
    cout<<"enter second string:"<<str2<< endl;
    cin>>str2;
    cout<<"the concatenation of "<<str1<<" and "<<str2<<" is "<<str1+str2<<endl;
    faction();
    return str1+str2;
}
enum adds1;

{
    int num1,num2;
    cout<<"enter nmber 1:"<<num1<< endl;
    cin>>num1;
    cout<<"enter nmber 2:"<<num2<< endl;
    cin>>num2;
    cout<<"the sum of "<<num1<<" and "<<num2<<" is "<<num1+num2<<endl;

  return   
}


int main(){
    //addes ();          //void
    //address ();        //void
    //informatio();      //void
    //sumintegar();      //vold
    //faction()          //fun
     //fuition1 ();        //fun

      adds1;



    return 0;
}
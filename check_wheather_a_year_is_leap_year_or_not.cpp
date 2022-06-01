#include<iostream.h>
using namespace std;
int main(){
  int year;
  cin>>year;
  if(year%100==0)
  {
    if(year%400==0)
    {
      cout<<"enter the year "<<year<<"is a leap year";
      }
  }
  else{
    if(year%4==0)
    {
      cout<<"entered year"<<year<<"is not leap year";
    }
  }
  
      
  return 0;
}


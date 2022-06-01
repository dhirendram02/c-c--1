#include<iostream.h>
using namespace std;
int main(){
  int n,revnum=0,rem;
  cin>>n;
  while(n!=0)
  {
    rem=n%10;
    revnum=revnum*10+rem;
    n=n/10;
  }
  cout<<revnum;
  return 0;
}


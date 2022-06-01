#include <iostream>
using namespace std;

int add(int a,int b);
int main() {
	int num1,num2,sum;
  cin>>num1>>num2;
  sum=num1+num2;
  cout<<" addition is : " <<sum<<endl;
  
	return 0;
}
int add(int a,int b)
{
  return (a+b);
}

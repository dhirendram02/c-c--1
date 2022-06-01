#include <iostream>
using namespace std;

int main() {
	long num1 = 0;
  cin>>num1;
  if(num1 > 0)
  {
    cout <<"entered number is positive";
  }
  else if (num1<0)
  {
    cout <<"entered number is negative";
  }
  else{
    std::cout <<"number is zero";
  }
	return 0;
}

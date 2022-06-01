#include <iostream>
using namespace std;

int main() {
	int n;
  int b[max+1] = {0};
  int i,j;
  int sum;
  int count;
  b[0] = 1;
  b[1] = 1;
  cin>> n;
  for(i=4; i<=max; i=i+2)
    b[i]=1;
  for(i=3;i<=sqrtmax;i=i+2)
    for(j+i+1;j<=max;j=j+i)
      b[j]=1;
  if(n==0)
    return 0;
  sum=0;
  count = 0 ;
  for(i=2;count<n;i++){
    if(b[i]==0){
      count++;
      sum=sum+i;
    }
  }
  cout << "sum of first " <<n<<"prime number"<<sum;
  
	return 0;
}

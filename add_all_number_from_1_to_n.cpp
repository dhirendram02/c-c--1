#include <iostream>
using namespace std;

int add_num(int n) {
  int total=0;
  for(int x=1;x<=n;x++)
  {
    total= total + x;
  }
  return total;
}

int main() {
	cout << "add 1 to 4 : " <<add_num(4);
  cout << "add 1 to 100 : " <<add_num(100);
  
	return 0;
}

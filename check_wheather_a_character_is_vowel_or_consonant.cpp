#include <iostream>
using namespace std;

int main() {
	char c;
  int islowercasevowel,isuppercasevowel;
  cin>>c;
  islowercasevowel =(c == 'a' || c=='e' || c=='i' || c=='o' || c=='u');
  isuppercasevowel =(c == 'A' || c=='E' || c=='I' || c=='O' || c=='U');
  if(islowercasevowel ||isuppercasevowel)
  {
    cout<<c<<"is vowel";
  }
  else
  {
    cout<<c<<"is consonant";
  }
  
	return 0;
}

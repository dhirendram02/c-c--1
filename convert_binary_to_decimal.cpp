#include <iostream>
using namespace std;

int main() {
    int n,ans,p,rem;
    ans=0;
    p=1;
    rem=0;
    n=13;
    //cin>>n;
    while(n>0){
        rem=n%2;
        ans=ans+rem*p;
        p=p*10;
        n=n/2;
    }
    cout<<ans;
	return 0;
}

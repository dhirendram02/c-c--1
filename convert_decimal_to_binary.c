#include <stdio.h>

int main() {
    int n,ans,p,rem;
    ans=0;
    p=1;
    rem=0;
    n=10;
    //scanf("%d",&n);
    while(n>0){
        rem=n%2;
        ans=ans+rem*p;
        p=p*10;
        n=n/2;
    }
    printf("%d",ans);
	return 0;
}


#include <stdio.h>
int swap(int*,int*);
int main() {
    int a=22,b=32;
    //scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("a is %d and b is %d",a,b);
	
	return 0;
}
int swap(int *p,int *q)
{
    int temp;
    temp = *p;
    *p=*q;
    *q=temp;
}


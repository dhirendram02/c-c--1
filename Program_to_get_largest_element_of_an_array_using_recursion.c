#include<stdio.h>
#define max 100
int largest(int[]);
int n;
int main()
{
int arr[0];
int startno,i;
n = 2;
//scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
startno =largest(arr);
printf("%d",startno);
return 0;
}

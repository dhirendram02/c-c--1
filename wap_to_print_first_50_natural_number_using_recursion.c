#include<stdio.h>
int num_print(int);
int main()
{
int n=1;
num_print(n);
return 0;
}
int num_print(int n)
{
if(n<50)
{
printf("%d",n);
num_print(n+1);
}
}
#include<stdio.h>
void arrelement(int arr[],int st,int i);
int main ()
{
int arr[100],n,i;
scanf("%d",&n);
for(i=0;i<n;I++)
{
scanf("%d",&arr[i]);
}
arrelement(arr,0,n);
return 0;
}
void arrelement(int arr[],int st , int l)
{
if(st>=1)
return 0;
printf("%d",arr[st]);
arrelement(arr,st + 1,l);
}
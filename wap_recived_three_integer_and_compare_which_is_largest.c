#include<stdio.h>
 int bigger(int,int,int);
 int main(){
 int num1,num2,num3,max;
 scanf("%d%d%d",&num1,&num2,num3);
 max = bigger(num1,num2,num3);
 printf("%d",max);
 return 0;
 }
 int bigger (int a,int b,int c)
 {
 if(a>b && a>c)
 {
 return a;
 }
 else if(b>c)
 {
 return b;
 }
 else{
 return c;
 }
 }
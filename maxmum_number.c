#include<stdio.h>
int main(){
 
   int a,b=0,c,e,j,d,i,count=0,count1=0,temp;
   a=1;
   //scanf("%d",&a);
 
   while(a>b)
 
   {
       scanf("%d",&c);
 
       scanf("%d",&d);

       int arr[c];
 
       e=c-d;
 
       for(i=0;i<c;i++){
 
           scanf("%d",&arr[i]);
 
       }
 
       for(i=0;i<c;i++)
 
       {
 
           for(j=i+1;j<c;j++)
           {
 
               if(arr[i]>arr[j])
 
               {
 
                   temp=arr[i];
 
                   arr[i]=arr[j];
 
                   arr[j]=temp;
 
               }
 
           }
 
       }

   for(i=c-e;i<c;i++)
 
       {
 
           count=count+arr[i];
       }
 
    for(i=0;i<e;i++){
           count1=count1+arr[i];
        }
 
       b++;
 
       printf("%d\n",count-count1);
 
       count1=0;
 
       count=0;
 
   }
   return 0;
}
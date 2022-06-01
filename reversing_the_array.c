#include<stdio.h>
int main()
{
    int arr[30];
    int i,j,n,temp;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]); 
    }
    j=i-1;
    i=0;
    while(i<j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(i=0;i<n;i++)
    {
       printf("%d\t",arr[i]); 
    }
return 0;
}
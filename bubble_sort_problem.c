#include<stdio.h>
int main()
{
    int n,i,j,count=0;
    scanf("%d",&n);
    int l[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&l[i]);
    }
    for(i=0;i<n;i++)
    {
        int k=0;
        for(j=0;j<n-i-1;j++)
        {
            if(l[j]>l[j+1])
            {
                int temp=l[j];
                l[j]=l[j+1];
                l[j+1]=temp;
                k=-1;
            }
        }
        if(k==0)
        {
                count+=1;
                break;
        }
        else
        {
            count+=1;
        }
 
    }
    printf("%d",count);
 
}
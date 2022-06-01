#include<stdio.h>
 int main()
{
    
    int size,i;
    scanf("%d",&size);
    int arr[size];

    int size2;
    scanf("%d",&size2);
    int arr2[size2];

     for(i=0;i<size;i++)
       {
        scanf("%d",&arr[i]);
        }


     for(i=0;i<size2;i++)
       {
        scanf("%d",&arr2[i]);
        }
    int j,count=0;

    for(i=0;i<size;i++)
    {
        for(j=0;j<size2;j++)
        {
            if(arr[i]==arr2[j]){
              count++;
        }
            
        }

    }
    if(count==size2)
        printf("array two is subset of one");
    else
        printf("array two is not a subset of one");
        
    return 0;
}
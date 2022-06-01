#include<stdio.h>
int main()
{
    
    int r,c,n;
    int arr1[50][50],arr2[50][50],arr3[50][50];
    //scanf("%d",&n);

    /*for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            scanf("%d",&arr1[r][c]);
        }
    }
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            scanf("%d",&arr2[r][c]);
        }
    }*/
    n = 2;
    arr1[0][0] = 2,3,4,5;
    arr2[0][0] = 5,3,2,6;

    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            arr3[r][c] = arr1[r][c] + arr2[r][c];
        }
    }
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("%d\t",arr3[r][c]);
        }
        printf("\n");
    }
    return 0;
}
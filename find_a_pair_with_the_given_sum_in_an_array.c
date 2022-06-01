#include <stdio.h>
 

void pair(int num[], int n, int target)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
           if (num[i] + num[j] == target)
            {
                printf("pair found (%d, %d)\n", num[i], num[j]);
                return;
            }
        }
    }
    printf("pair not found");
}
 
int main(void)
{
    int num[] = { 8, 7, 2, 5, 3, 1 };
    int target = 10;
 
    int n = sizeof(num)/sizeof(num[0]);
 
    pair(num, n, target);
 
    return 0;
}
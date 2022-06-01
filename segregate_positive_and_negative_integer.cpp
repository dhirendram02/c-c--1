#include <iostream>
#include <algorithm>
using namespace std;
 
void partition(int a[], int n)
{
    int j = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0) 
        {
            swap(a[i], a[j]);
            j++;
        }
    }
}
 
int main()
{
    int a[] = { 9, -3, 5, -2, -8, -6, 1, 3 };
    int n = sizeof(a)/sizeof(a[0]);
 
    partition(a, n);
 
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
 
    return 0;
}

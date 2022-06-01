#include<iostream>
using namespace std;
void twoWaySort(int arr[], int n)
{
     
    int l = 0, r = n - 1;
 
    int k = 0;
 
    while (l < r)
    {
        while (arr[l] % 2 != 0)
        {
            l++;
            k++;
        }
        while (arr[r] % 2 == 0 && l < r)
            r--;
        if (l < r)
            swap(arr[l], arr[r]);
    }
    /*(arr, arr + k, greater<int>());
 
    (arr + k, arr + n);*/
}
 
int main()
{
    int arr[] = { 1, 3, 2, 7, 5, 4 };
    int n = sizeof(arr) / sizeof(int);
    twoWaySort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
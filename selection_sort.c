#include<stdio.h>

void swap(int arr[],int i ,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void selection(int arr[],int n){
    for(int i=0;i<n-1;i++)
    {
        int min = i;
        for(int j=i-1;j<n;j++)
        {
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr,min,i);
    }
}
void printarray(int arr[],int n){
    for(int i = 0 ; i<n ; i++ ){
     printf("%d",arr[i]);
    }
}
int main(){
    int arr[] = {3,4,2,5,9,5,-2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printarray(arr,n);
    selection(arr ,n);
    return 0;
}
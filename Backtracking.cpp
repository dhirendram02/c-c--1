#include <iostream>
using namespace std;

void printarray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void fillarray(int *arr,int i,int n,int val){
if(i==n){
    //print array
    printarray(arr,n);
    return;
    
}
//rec case
arr[i] = val;
fillarray(arr,i+1,n,val+1);
//backtracking step
arr[i] = -1*arr[i];
}

int main(){
    int arr[100]= {0};
    int n;
    //cin>>n;
    n = 6;

    fillarray(arr,0,n,1);
    printarray(arr,n);
}
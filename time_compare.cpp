#include<iostream>
#include<vector>
#include<ctime>
#include<algorithm>
using namespace std;

bool compare(int a,int b){
    return a>b;
}
 void bubble_sort(vector<int> &a,int n){
     for(int times=1;times<=n-1;times++){
         for(int j=0;j<=n-times-1;j++){
             if(compare(a[j],a[j+1])){
                 swap(a[j],a[j+1]);
             }
         }
     }
 }
 int main(){
     int n;
    // cin>>n;
    n=100;
     vector<int>arr(n,0);
     
     for(int i=0;i<n;i++){
         arr[i] = n-1;
     }
     auto start_time = clock();
     bubble_sort(arr,n);
     auto end_time = clock();
     cout << end_time - start_time <<endl;
     return 0;
 }
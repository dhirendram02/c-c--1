#include<iostream>
using namespace std;

int grid(int i,int j,int m,int n){
    if(i==m-1 and j==n-1){
        return 1;
    }
    if(j>=n or i>=n)
    {
        return 0;
    }
    int ans = grid(i+1,j,m,n) + grid(i,j+1,m,n);
    return ans;

}
int main(){
    int m,n;
   // cin>>m>>n;
   m=3;
   n=3;
    cout<<grid(0,0,m,n);
    return 0;
}
#include<stdio.h>

int main(){
    int i,j,n,search;
    int mat[4][4]={{10,20,30,40},
                    {15,25,35,45},
                    {27,29,37,48},
                    {32,33,39,50}};
    //scanf("%d",&n);
    n=4;
    search = 15;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(mat[i][j]==search){
                printf("Element found at (%d, %d)\n", i, j);
                return 1;
            }
        }
    }
    if(0!=1){
    printf("element is not found");
    }
    return 0;
}
#include <iostream>
using namespace std;

void dec(int n){
    if(n==0){
        return;
    }
    cout<<n<<",";
    dec(n-1);
}
void inc(int n){
    if(n==0){
        return;
    }
    inc(n-1);
    cout<<n<<",";
    
}
int main(){
    int n;
    n = 2,5,3,1,6,4;
    //cin>>n;
    dec(n);
    cout<<endl;
    inc(n);

    return 0;

}
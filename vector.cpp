#include<iostream>
#include<vector>
using namespace std;

int main(){
    //vector<int>arr = {1,22,31,33,44,24,43};
    //fill constructor
    vector<int>arr(10,8);
    //pop back
    arr.pop_back();
    //push back 0(1)
    arr.push_back(16);
    //print all the element
    for(int i=0 ;i< arr.size() ; i++){
     cout<<arr[i]<<endl;
    }
    //size of the vector
    /*cout<<arr.size()<<endl;
    //capacity of the vector
    cout<<arr.capacity()<<endl;*/
    return 0;
}
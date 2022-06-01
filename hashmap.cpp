#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int>map;
    map["india"]=60;
    map["china"]=30;
    map["us"]=40;

    for(pair<string,int>p:map){
        cout<<p.first<<" "<<p.second<<endl;
    }
    map.insert({"uk",48});
    for(pair<string,int>p:map){
        cout<<p.first<<" "<<p.second<<endl;
    }
    string key = "nepal";
    if(map.find(key)==map.end()){
        cout<<"not found";
    }
    else{
        cout<<"found";
    }

return 0;
}
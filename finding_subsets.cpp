#include <iostream>
#include<vector>
using namespace std;
void findsubsets(char *input,char *output,int i,int j){
   if(input[i]=='\0'){
       output[j] = '\0';
        if(output[0]=='\0'){
          cout<<"NULL";
        }
        cout<<output<<endl;
        return;
    }
    output[j] = input[i];
    findsubsets(input,output, i+1, j+1);
    findsubsets(input,output,i+1,j);
}

int main(){
    char input[100] = "abcd";
    char output[100];
    //cin>>input;
    findsubsets(input,output,0,0);
    return 0;
}

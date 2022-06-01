#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int calTotalMarks(vector<int> marks){
    return marks[0] + marks[1] + marks[2];
    }
bool compare(pair<string,vector<int> > s1, pair<string,vector<int> > s2){
     vector<int> m1 = s1.second;
     vector<int> m2 = s2.second;
     return calTotalMarks(m1) > calTotalMarks(m2);
}
int main(){
    vector<pair<string,vector<int> > >  student_marks = {
        {"Roshan", {10,12,13}},
        {"Prateek",{12,23,43}},
        {"Vivek",{3,4,5}},
        {"Rahul",{22,43,55}}
    };
    sort(student_marks.begin(),student_marks.end(),compare);

    for(auto s : student_marks){
        cout<< s.first <<" "<<calTotalMarks(s.second)<<endl;
    }
    
}
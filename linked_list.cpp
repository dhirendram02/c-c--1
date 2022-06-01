#include<iostream>
#include "list.h"
using namespace std;

int main(){

    list l;
    l.push_front(1);
    l.push_front(0);
    l.push_back(3);
    l.push_back(4);

    l.insert(2,2);
    l.insert(10,1);

    Node* head = l.begin();
    while(head!=NULL){
        cout<<head->getdata()<<"->";
        head = head->next;
    }
    return 0;
}
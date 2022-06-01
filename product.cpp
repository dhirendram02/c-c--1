#include<iostream>
#include<string.h>
using namespace std;

//product (shopping Website)
class product{
     int id;
     char name[100];
public:
     int mrp;
     int selling_price;
     //constructor
     product(){
          cout<<"inside constructor ";
     }
     //parameterised constructors
     product(int id,char *n,int mrp,int selling_price){
          this->id = id;
          this->mrp = mrp;
          this->selling_price = selling_price;
          strcpy(name,n);
     }
     void showdetails(){
          cout<<"name : "<<name<<endl;
          cout<<"id :"<<id<<endl;
          cout<<"selling price "<<selling_price<<endl;
          cout<<"mrp : "<<mrp <<endl; 
     }
     
};
int main(){
    product camera(877,"hi",20000,25555);
    //camera.showdetails();
    product webcam(camera);

    camera.showdetails();
    webcam.showdetails();
    /*camera.mrp = 100;
    camera.selling_price = 200;
    cout<<sizeof(camera)<<endl;*/
    cout<<"MRP "<<camera.mrp<<endl;
    cout<<"Selling Price "<<camera.selling_price<<endl;
}


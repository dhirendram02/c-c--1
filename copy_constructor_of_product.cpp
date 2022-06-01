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
     product(product &x){
        id =x.id;
        strcpy(name,x.name);  
        mrp = x.mrp;
        selling_price = x.selling_price;

     }
     void showdetails(){
          cout<<"name : "<<name<<endl;
          cout<<"id :"<<id<<endl;
          cout<<"selling price "<<selling_price<<endl;
          cout<<"mrp : "<<mrp <<endl; 
     
     cout<<"------------"<<endl;
     }
     
};
int main(){
    product camera(877,"gopro",20000,25555);
    //camera.showdetails();
    //copy is made using a special constructor -> Copy Constructor
    product webcam(camera);
    product handycam = camera;
    camera.showdetails();
    webcam.showdetails();
    /*camera.mrp = 100;
    camera.selling_price = 200;
    cout<<sizeof(camera)<<endl;*/
    cout<<"MRP "<<camera.mrp<<endl;
    cout<<"Selling Price "<<camera.selling_price<<endl;
}
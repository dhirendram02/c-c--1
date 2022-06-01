#include<iostream>
#include<string.h>
using namespace std;

//product (shopping Website)
class product{
private:
     int id;
     char *name;
     int mrp;
     int selling_price;
public:
     //constructor
     product(){
          cout<<"inside constructor ";
     }
     //parameterised constructors
     product(int id,char *n,int mrp,int selling_price){
          this->id = id;
          this->mrp = mrp;
          this->selling_price = selling_price;
          name = new char[strlen(n)+1];
          strcpy(name,n);
     }
     /*product(product &x){
        //create to the copy
        id = x.id;
        strcpy(name,x.name);
        mrp = x.mrp;
        selling_price = x.selling_price;
    }
    */
    // setters
    void setMrp(int price){
         if(price>mrp){
              selling_price = mrp;
         }
         else{
              selling_price = price;
         }
     }
     void setSellingPrice(int price){
         if(price>mrp){
              selling_price = mrp;
         }
         else{
              selling_price = price;
         }
     }
     
    //getters
    int getMrp(){
         return mrp;
    }
    int getSellingPrice(int){
         return selling_price;
    }
     void showdetails(){
          cout<<"name : "<<name<<endl;
          cout<<"id :"<<id<<endl;
          cout<<"selling price "<<selling_price<<endl;
          cout<<"mrp : "<<mrp <<endl; 

          cout<<"----------" <<endl;
     }
     //setter for the name 
     void setname(char *name){
          strcpy(this->name,name);
        }
     ~product(){
         cout<<"Deleting "<<name<<endl;
         if(name!=NULL){
             delete [] name;
             name = NULL;
         }
     }
};
int main(){
    product camera(877,"goPro",20000,25555);
    product old_camera(camera);

    old_camera.setname("GoPro9");
    old_camera.setSellingPrice(1000);

    old_camera.showdetails();
    camera.showdetails();
    //product webcam(camera);

    /*camera.showdetails();
    webcam.showdetails();
    camera.mrp = 100;
    camera.selling_price = 200;
    cout<<sizeof(camera)<<endl;
    cout<<"MRP "<<camera.mrp<<endl;
    cout<<"Selling Price "<<camera.selling_price<<endl;
    */
   return 0;
}

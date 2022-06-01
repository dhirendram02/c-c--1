#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

//product (shopping Website)
class product{
private:
     int id;
     char name[100];
     int mrp;
     int Selling_price;
public:
   //constructor
   product(){
       //cout<<"inside constructor";
   }
   product(int id,char *n,int mrp,int selling_price){
       this->id = id;
       this->mrp = mrp;
       this->Selling_price=Selling_price;
       strcpy(name,n);
   }
    //setters
    void setmrp(int price)
    {  if(price>0){
        mrp=price;
        }
    }
    void setSellingprice(int price){
        //additional checks
        if(price>mrp){
            Selling_price = mrp;
        }
        else{
            Selling_price = price;
        }
    }
    //getters
    int getmrp(){
        return mrp;
    }
    int getSellingprice(){
        return Selling_price;
    }
};   

int main(){
    product camera(101,"Sonygopro",2800,2600);
    //camera.setmrp(100);
    //camera.setSellingprice(22);
    //cout<<sizeof(camera)<<endl;
    cout<<"MRP "<<camera.getmrp()<<endl;
    cout<<"Selling Price "<<camera.getSellingprice()<<endl;
}

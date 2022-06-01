#include<iostream>
using namespace std;
 
class point
{
private:
    int x, y;
public:
    point(int x1, int y1) {
         x = x1;
         y = y1;
     }
 
    // Copy constructor
    point(const point &p1) {
        x = p1.x;
        y = p1.y; 
    }
 
    int getX(){   
            return x;
            }
    int getY(){  
       return y;
    }
};
 
int main()
{
    point p1(10, 15); 
    point p2 = p1; 
    cout << p1.getX()<<" , "<< p1.getY() <<endl;
    cout<<"---------------"<<endl;
    cout<< p2.getX() <<" , "<< p2.getY();
 
    return 0;
}
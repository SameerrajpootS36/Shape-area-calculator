

#include <iostream>
using namespace std;

class Shape{
    public:
    virtual double area() const = 0;

};
class Circle : public Shape{
    public:
    int radius;
    Circle(double r){
      radius = r;  
    }

    double area() const override{
        return 3.14*radius*radius;
    }
    
};
class Rectangle : public Shape{
    public:
    int height;
    int width;
    Rectangle(double h, double w){
        height = h;
        width = w;
    }
    
    double area() const override{
        return height*width;
    }
};
int main(){
    double r, h,w;
    cout<<"radius: "<<endl;
    cin>>r;
   
    
    Circle c(r);
     cout<<"area of circle:"<<c.area();
    
    
    cout<<"height"<<endl;
    cin>>h;
    
    cout<<"width"<<endl;
    cin>>w;
    
    Rectangle r1(h,w);
    cout<<"area of Rectangle:"<<r1.area();
    
    
    
    return 0;
}

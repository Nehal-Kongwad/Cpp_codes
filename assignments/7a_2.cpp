#include <iostream>
using namespace std;
class Calculate{
    int l,b,h;
    public:
    Calculate(){   // calling to Default constructor
        l=10;
        b=20;
        h=30;
    }
    void area(int );   //Area of Square
    void area(float ); //Area of Circle
    void area(int , int , int );  // Area of Triangle
    void area(int , int );  //Area of Rectangle
    
   
};
void Calculate :: area(int x ){ // area of square
    l=x; 
    int res = l*l;
    cout<<"The area of Square is : "<<res<<endl;
}
void Calculate :: area(float r ){  // area of circle
    l=r;
    float res = 3.14 * l*l;
    cout<<"The area of Circle is : "<<res<<endl;
}
void Calculate :: area(int x , int y , int z){  //area of triangle 
    l=x; b=y; h=z;
    int res = l*b*h;
    cout<<"The area of Triangle is : "<<res<<endl;
}
void Calculate :: area(int x , int y){  //area of rectangle
    l=x; b=y;
    int res = l*b;
    cout<<"The area of Rectangle is : "<<res<<endl;
}

int main()
{
    int x,y,z;
    float r;
    Calculate c;
    cout<<"Enter the length :- ";
    cin>>x;
    cout<<"Enter Breadth :- ";
    cin>>y;
    cout<<"Enter height :- ";
    cin>>z;
    cout<<"Enter the radius :- ";
    cin>>r;
    c.area(x);
    c.area(r);
    c.area(x,y,z);
    c.area(x,y);
    return 0;
}

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
    int x,y,z,ch;
    float r;
    Calculate c;
    
    cout<<"Enter 1. to find area of square. "<<endl<<"Enter 2. to find area of circle."<<endl<<"Enter 3. to find area of triangle."<<endl<<"Enter 4. to find area of rectangle "<<endl;
    cout<<"Enter your choice :";
    cin>>ch;
    switch(ch){
        case 1:
        cout<<"Enter the side of square :- ";
        cin>>x;
        c.area(x);
        break;
        case 2:
        cout<<"Enter the radius of circle :- ";
        cin>>r;
        c.area(r);
        break;
        case 3:
        cout<<"Enter the length of triangle:- ";
        cin>>x;
        cout<<"Enter the breadth of the triangle :- ";
        cin>>y;
        cout<<"Enter the height of the triangle :- ";
        cin>>z;
        c.area(x,y,z);
        break;
        case 4:
        cout<<"Enter the length of the rectangle :- ";
        cin>>x;
        cout<<"Enter the breadth of the rectangle :- ";
        cin>>y;
        c.area(x,y);
        break;
        default:
        cout<<"Wrong choice";
    }
    return 0;
}

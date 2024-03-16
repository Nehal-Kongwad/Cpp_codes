//To perform Arithmetic operations using operator function

#include<iostream>
using namespace std;
class Complex
{
    int r , i;
    public:
    void input(){
        cout<<"Enter rear value :- ";
        cin>>r;
        cout<<"Enter imaginary value :- ";
        cin>>i;
    }
    void operator + (Complex c2){
        int res1 = r + c2.r;
        int res2 = i + c2.i;
        cout<<"The addition of 2 complex number is : ";
        cout<<res1 <<" + "<<res2<<"i"<<endl;
    }
    void operator -(Complex c2){
        int res1 = r - c2.r;
        int res2 = i - c2.i;
        cout<<"The substraction of 2 complex number is : ";
        cout<<res1 <<" - "<<res2<<"i"<<endl;
    }
    void operator *(Complex c2){
        int res1 = (r*c2.r ) - (i*c2.i) ;  //(ac-bd) real part of product
        int res2 = (r*c2.i) + (c2.r*c2.i); // (ad+bc) imaginary part of product
        cout<<"The multiplication of 2 number is : ";
        cout<<res1<<" + "<<res2<<"i"<<endl;
    }
    void operator /(Complex c2){
        int res1 = ((r*c2.r) + (i*c2.i))/((c2.r * c2.r) +(c2.i * c2.i));//(ac+bd) real part of division
        int res2 = ((i*c2.r) - (r*c2.i))/((c2.r * c2.r) +(c2.i * c2.i));
        cout<<"The division of 2 number is : ";
        cout<<res1 <<" + "<<res2<<"i"<<endl;
    }
};
int main(){
    Complex c1 , c2;
    c1.input();
    c2.input();
    c1 + c2;
    c1 - c2;
    c1 * c2;
    c1 / c2;
    return 0;
}
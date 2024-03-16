//Write a program to print sum of digits EX:- n=345 then its sum is 12

#include<iostream>
using namespace std;
int main(){
    int r , num, sum = 0;
    cout<<"Enter the number :- "<<endl;
    cin>>num;
    while(num!=0){
        r = num % 10;
        sum = sum + r;
        num = num / 10;
    }
    cout<<"The sum of "<<num<<" is :- "<<sum;
    
    return 0;
}
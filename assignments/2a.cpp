#include <iostream>  
using namespace std;
int main(){
    int num, sum = 0, r;
    cout<<"Enter the positive number : ";  // taking input from user
    cin>>num;   // stored the number 
    while (num!=0)  
    {
        r = num % 10 ;  // "%" gives remainder :- 345 % 10 = 5
        sum = sum + r ; 
        num = num / 10 ;  // "/" operator gives quotient :- 345 / 10 = 34
    }
    cout<<"The sum is : "<<sum;
    return 0;
    }
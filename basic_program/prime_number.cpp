// Write a program to check whether the given number is prime or not

#include<iostream>
using namespace std;
int main(){
    int i, num, flag =0;
    cout<<"Enter the number to check prime or not :- "<<endl;
    cin>>num;
    if(num==0 || num==1){
        flag = 1;
    }
    for(i = 2; i<num/2; i++){
        if(num%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout<<"The number " <<num<<" is Prime Number "<<endl;
    }
    else{
        cout<<"The number "<<num<<" is not Prime Number "<<endl;
    }
    return 0;
}
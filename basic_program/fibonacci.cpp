// Write a program to print fibonacci series of n number 
#include<iostream>
using namespace std;
int main(){
    int n,n1,n2,n3;
    n1 = 0;
    n2 = 1;
    cout<<"Enter the limit of fibonacci series :- ";
    cin>>n;
    cout<<"The fibonacci series is :- "<<endl;
    cout<<n1<<" "<<n2<<" ";
    for(int i = 0; i<n; i++){
        n3 = n1+n2;
        cout<<n3<<" ";
        n1 = n2;
        n2 = n3;
    }
    return 0;

}
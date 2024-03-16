// Write a program to calculate average of n numbers

#include<iostream>
using namespace std;

int main(){
int n, i, sum=0, avg,a[100];
cout<<"Enter the number of elements :- ";
cin>>n;
a[n];
cout<<"Enter the elements :- ";
for(i = 0; i<n; i++){
    cin>>a[i];
}
for(i = 0; i<n; i++){
    sum = sum + a[i];
    avg = sum / n;
}
cout<<"The average is :- "<<avg;
}

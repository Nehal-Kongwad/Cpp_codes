// Write a program to find maximum of three number

#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter three numbers :- "<<endl;
    cin>>n1>>n2>>n3;
    if(n1>n3){
        cout<<n1<<" is maximum"<<endl;
    }
    else if(n2>n3){
        cout<<n2<<" is maximum"<<endl;
    }
    else {
        cout<<n3<<" is maximum"<<endl;
    }
    return 0;
}
// can also write as :-
//max = (n1>n2)?n1:n2;
//cout<<"maximum is "<<max;
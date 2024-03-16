#include<iostream>
using namespace std;
int main(){
    int var;
    var = 1000;
    int &ref_var = var;
    cout<<"The original variable is :- "<<var<<endl;
    cout<<"The reference variable is :- "<<ref_var<<endl;
    return 0;
}

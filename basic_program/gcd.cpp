 // Write a program to calculate gcd of 2 number
 #include<iostream>
 using namespace std;
 int main(){
    int n1 , n2, gcd , i;
    cout<<"Enter 2 numbers :- "<<endl;
    cin>>n1>>n2;
    for(i = 1; i<=n1 && i<=n2; i++){
        if(n1%i == 0 && n2%i == 0){
            gcd = i;
        }
    }
    cout<<"The GCD of 2 numbers is :- "<<gcd<<endl;
    return 0;
 }
#include<iostream>
using namespace std;
class Fibonacci{
    int n1,n,n2,n3;
    public:
    Fibonacci();
    void input ();
    void calculate();

};
 Fibonacci :: Fibonacci(){
    n1 = 0;
    n2 = 1;
 }
void Fibonacci :: input(){
    cout<<"Enter the limit of the fibonacci :-";
    cin>>n;
}
void Fibonacci :: calculate(){
    for(int i = 2; i<n; i++){
        n3 = n1 + n2;
        cout<<n3<< " ";
        n1 = n2;
        n2 = n3;
    }
}


int main(){
    Fibonacci f;
    Fibonacci();
    f.input();
    f.calculate();
    return 0;
}
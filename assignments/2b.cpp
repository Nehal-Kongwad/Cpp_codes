#include <iostream>

using namespace std;

int main()
{
    int i,n,n1=0,n2=1,n3;
    cout<<"Enter the limit of the fibonacci series : ";
    cin>>n;
    cout<<"The fibonacci series is : ";
    cout<<n1<<" ";
    cout<<n2<<" ";
    for(i=2;i<n;i++){
        n3 = n1+n2;
        cout<<n3<<" ";
        n1 = n2;
        n2 = n3;
    }

    return 0;
}

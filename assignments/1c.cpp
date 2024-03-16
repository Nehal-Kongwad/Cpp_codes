#include <iostream>
using namespace std;

int main()
{
    int s,i,n,count =0;
    cout<<"Enter the number of elements ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of an array :- "<<endl;
    
    for(i=0;i<n;i++){
    cin>>a[i];
    cout<<a[i]<<" ";
    }
    cout<<endl<<"Enter the number to be Searched :- ";
    cin>>s;
    for(i = 0; i<n; i++){
        if(a[i]== s){
            count++;
            break;
        }
    }
    if(count==0)
    cout<<"Search not Found ";
    else
    cout<<"Search Found";
    return 0;
    
}


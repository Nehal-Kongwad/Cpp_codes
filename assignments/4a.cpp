#include <iostream>
using namespace std;

class Sort{
    int a[20],size=5;
    int temp;
    public:
    void read();
    void display();
    void srt();
};
void Sort :: read(){
    cout<<"Enter the elements of an array "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
}
void Sort :: display(){
    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<" ";
    }
}
void Sort :: srt(){
    for(int i =0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main(){
    Sort a;
    a.read();
     cout<<"before sorting "<<endl;
    a.display();
    a.srt();
    cout<<"After sorting "<<endl;
     a.display();
     return 0;
 }
#include<iostream>
using namespace std;
class STUDENT{
    int n,i;
    string Sname;
    float Marks[100], Total , Tmax;
    public:
    STUDENT();
    void assign();
    void compute();
    void display();
};
STUDENT :: STUDENT(){
    Total = 0;
    Tmax = 0;
    Marks[100]=0;
}
void STUDENT :: assign(){
    cout<<"Enter the name of the student :- "<<endl;
    cin>>Sname;
    cout<<"Enter the number of subjects : ";
    cin>>n;
    Marks[n];
       for(i = 0; i < n; i++){
        cout<<"Enter the Marks of "<< i+1 << " subject : ";
        cin>>Marks[i];
    }
}
void STUDENT :: compute(){
    for(i = 0; i < n; i++){
        Total = Total + Marks[i];
        Tmax = Total / n;
    }
}
void STUDENT :: display(){
    cout<<"The name of the student is :- "<<Sname<<endl;
    for(i = 0; i < n; i++){
        cout<<"Marks of "<< i+1<< " subject is :- "<<Marks[i]<<endl;
    }
    cout<<"Total Marks obtained in "<< n<< " subjects :- "<<Total<<endl;
    cout<<"The Average Marks obatined is :- "<<Tmax;
}
int main(){
    STUDENT s;
    STUDENT();
    s.assign();
    s.compute();
    s.display();
    return 0;
}
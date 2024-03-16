#include<iostream>
using namespace std;
class Bank{
    string name, type_acc;
    static int act_no;
    float bal_amt, withd,deposit;

    public:
    Bank(string n, string t, int ba){
        name=n; type_acc=t; bal_amt=ba;
    }
    void show(){
        cout<<name<<'\t'<<type_acc<<'\t'<<bal_amt<<endl;
    }

    void withdraw(){
        cout<<"Enter the amout to be withdrawl "<<endl;
        cin>>withd;
        bal_amt = bal_amt - withd;
    }
    void balance(){
        cout<<bal_amt;
    }
};
static int act_no =0;
int main(){
    Bank c[]= {Bank("Ajay","Saving",10000) , Bank("Sara","current",25000)};
    int n;
    char choice;
    cout<<"Enter the number of customers you want : "<<endl;
    cin>>n;
    do{
        for(int i = 0; i<n; i++){
            c[i].show();
            c[i].withdraw();
            c[i].balance();
        }
        cout<<"Do you want to continue ??"<<endl;
        cin>>choice;
    }
    while(choice == 'y');
    return 0;
    }
    
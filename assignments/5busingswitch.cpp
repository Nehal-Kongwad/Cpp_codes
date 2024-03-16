#include<iostream>
using namespace std;
class Bank{
    string name, type_acc;
    static int act_no;
    float bal_amt, withd,deposit;

    public:
    void details(){
        cout<<"Enter your Details : ";
        cout<<"Enter the name : ";
        cin>>name;
        cout<<"Enter the account type :- ";
        cin>>type_acc;

    }

    void withdraw(){
        cout<<"Enter the amount to be withdrawl "<<endl;
        cin>>withd;
        bal_amt = bal_amt - withd;
    }
    void balance(){
        cout<<"The Balance amount is : "<<bal_amt<<endl;
    }
};
static int act_no =0;
int main(){
    int choice;
    cout<<"Enter 1 for inputting details "<<"\t"<<"Enter 2 for "
}
#include<iostream>
using namespace std;
class Book{
    string author, title, publisher;
    int stk_pos,n;
    float price;
    public:
    void input();
    void display();
    void search(string,string);
    };
    void Book :: input(){
        cout<<"Enter the Author of the book : "<<endl;
        cin>>author;
        cout<<"Enter the title of the book : "<<endl;
        cin>>title;
        cout<<"Enter the publisher of the book : "<<endl;
        cin>>publisher;
        cout<<"Enter the stock position : "<<endl;
        cin>>stk_pos;
        cout<<"Enter the price of the book : "<<endl;
        cin>>price;

    }
    void Book :: display(){
        cout<<"The Author of the book is : "<<author<<endl;
        cout<<"The Title of the book is : "<<title<<endl;
        cout<<"The Publisher of the book is : "<<publisher<<endl;
        cout<<"The Stock Position of the book is : "<<stk_pos<<endl;
        cout<<"The Price of the book is : "<<price<<endl;
    }
    void Book :: search(string t, string a){
        if(title == t && author == a)
        {
        cout<<"The book is available"<<endl;
        cout<<"The book details are :"<<endl;
        cout<<"Author :- "<<author<<endl;
        cout<<"Title :- "<<title<<endl;
        cout<<"The Publisher :- "<<publisher<<endl;
        cout<<"The Price of the book :- "<<price<<endl;
        cout<<"Enter the number of copies you want :- "<<endl;
        cin>>n;
    
        if(n <= stk_pos){
            cout<<"Copies are available "<<endl;
            price = price *n;
            cout<<"The total price of "<< n << " copies is "<<price; 
        }
        else {
        cout<<"Required copies not in stock "<<endl;
        }
        }
        else {
      
      cout<<"The book is not available"<<endl;
    }
    }
    int main ()
    {
        string tit, aut;
        Book b1[10];
        int num;
        cout<<"Enter the number of books you want :- ";
        cin>>num;
        for(int i = 0; i<num; i++){
            b1[i].input();
            b1[i].display();
            cout<<"Enter the title to be searched "<<endl;
            cin>>tit;
            cout<<"Enter the author of the book to be searched : "<<endl;
            cin>>aut;
            b1[i].search(tit, aut);
        }
        return 0;
    }

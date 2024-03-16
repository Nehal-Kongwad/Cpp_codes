//Write a Program to calculate the number of words present in given string

#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int i,length, count =0;
    string sentence = "My Name is Nehal";
    length = sentence.length();
    for(i = 0; i < length; i++){
        if(sentence[i]==' '){
            count++;
        }
    }
    count = count + 1;
    cout<<"Number of words are : "<<count<<endl;
    return 0;
}


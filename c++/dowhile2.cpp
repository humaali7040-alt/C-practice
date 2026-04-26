#include <iostream>
using namespace std;

int main(){
    int a,b;
    char choice,n;
    do{
        cout<<"enter two numbers :";
         cin>>a>>b;
        cout<<"product is :"<< a*b<<endl;
        cout<<"do you want to continue ? ( enter y to continue)";
        cin>>choice;
        }
    while(choice!='n');{
        cout<<"exit ";
      }
       return 0;
    }
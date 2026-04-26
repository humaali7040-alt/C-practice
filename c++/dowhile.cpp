#include<iostream>
using namespace std;
int main(){
    int a,b,c,p;
     c=1;
     p=1;
    cout<<"enter first numbers :";
    cin>>a;
    cout<<"enter second number :";
    cin>>b;
    do{
        p=p*a ;
         c++;
    }
    while(c<=b);{   
        cout<<"result is"<<p;
        return 0;
}
}
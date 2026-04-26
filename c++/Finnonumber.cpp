#include<iostream>
using namespace std;
int main(){
    int n,a,b,count,next;
    cout<<" enter a number:";
    cin>>n;
    if((n==0) || (n==1)){
        cout<<"it is a fibonacci number";
    }
    else{
       a=0;
       b=1;
        next=a+b;
         }
      while(next<n){
        next=a+b;
        a=b;
        b=next;
      }  
        if(next==n){
        cout<<n<<"  is a fibo number";
      }
      else{
        cout<<"not a fibo num";
      }
      
      return 0;
    
}
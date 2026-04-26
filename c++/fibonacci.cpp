#include<iostream>
using namespace std;
int main(){
    int a,b,next,count=2;
    a=1;
    b=1;
    cout<<a<<'\t'<<b;
    while(count<=11){
     next=a+b;
    cout<<'\t'<<next;
    a=b;
    b=next;
    count++;
}
         return 0;
}
         
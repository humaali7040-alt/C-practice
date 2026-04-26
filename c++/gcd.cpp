#include <iostream>
using namespace std;
int main(){
    int a,b,i,gcd=1;
    cout<<"enter a small number :";
    cin>>a;
    cout<<"enter a large number :";
    cin>>b;
    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0)
            gcd=i;
    }
         cout<<"gcd is :"<<gcd;
    return 0;
}
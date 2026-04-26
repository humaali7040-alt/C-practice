#include <iostream>
using namespace std;
int main (){
    int n,i,f=1;
    i=1;
    cout<<"enter a number :";
    cin>>n;
    while(i<=n){
         f=f*i;
         i++;
    }
       cout<<" factorial of "<< n<<"="<<f<<endl;
        return 0;
}
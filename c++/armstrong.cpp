#include <iostream>
using namespace std;
int main (){
    int num,r,n,sum=0;
    cout<<"enter a number :";
    cin>>num;
      n=num;
    while(num!=0){
    r=(num%10);
    sum=sum+(r*r*r);
    num=num/10;
}
     if(sum==n)
     cout<<n<<" is an armstrong number"<<endl;
     else
     cout<<n<<" not an armstrong number"<<endl;
      return 0;
}
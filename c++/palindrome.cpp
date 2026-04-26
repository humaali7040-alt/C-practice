#include <iostream>
using namespace std;

int main(){
    int n,r,rev,num;
    rev=0;
    cout<<"enter a number :";
    cin>>n;
    num=n;
    do{
        r=num%10;
        rev=(rev*10)+r;
        num=num/10;
    }
    while(num!=0);
     if(n==rev){
        cout<<n<<" is a palindrome number"<<endl;
     }
    else{
        cout<<" not a palindrome number.";
    }
         return 0;
}
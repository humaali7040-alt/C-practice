#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    n=1;
    while(n<=50){
       sum=sum+(n*n*n);
       n++;
    }
      cout<<"sum of series"<<sum;
      return 0;
}

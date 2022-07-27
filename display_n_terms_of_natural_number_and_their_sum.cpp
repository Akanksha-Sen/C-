#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout<<"enter the value of n till where you want the natural numbers: ";
    cin>> n;
    for(i=1;i<=n;i++){
        cout<<i<<"\n";
        sum=sum+i;
    }
    cout<<"the sum of first n natural numbers is: "<<sum;
    return 0;
}
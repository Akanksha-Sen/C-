#include<iostream>
using namespace std;
int main(){
    int fact=1,n,i;
    cout<<"enter the number for factorial: ";
    cin>>n;
    for(i=n;i>=1;i--){
    fact=fact*i;
    }
    cout<<"the factorial of "<<n<< " is: "<<fact;
    return 0;
}
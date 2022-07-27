#include<iostream>
using namespace std;
int main(){
    int a,i;
    cout<<"enter the number: ";
    cin>>a;
    for(i=2;i<=a-1;i++){
        if(a%i==0)
        cout<<"not a prime number!";
    }
    return 0;
}
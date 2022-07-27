#include<iostream>
using namespace std;
int main(){
    int a,n,i,x;
    cout<<"enter the number: ";
    cin>>a;
    cout<<"enter the range: ";
    cin>>n;
    for(i=1;i<=n;i++){
        x=a*i;
        cout<<a<<"*"<<i <<"=" <<x<<"\n";
        i++;
    }
    return 0;
}
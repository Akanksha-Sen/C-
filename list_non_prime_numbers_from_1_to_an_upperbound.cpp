#include<iostream>
using namespace std;
int main(){
    int x,i;
    cout<<"enter the upperbound: ";
    cin>>x;
    for(i=2;i<=x-1;i++){

        if(i%2!=0)
        cout<<i<<"\n";
    }
    return 0;
}
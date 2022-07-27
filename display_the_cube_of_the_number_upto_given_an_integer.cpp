#include<iostream>
using namespace std;
int main(){
    int a,x,i;
    cout<<"enter the range: ";
    cin>>a;
    
    for(i=1;i<=a;i++){
        x=i*i*i;
        cout<<"the number is: "<<i<<" and the cube of "<<i<<" is: "<<x<<"\n";
    }
    return 0;
}
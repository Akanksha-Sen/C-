#include<iostream>
using namespace std;
int main(){
    int a,i,sum=0;
    cout<<"enter the range: ";
    cin>>a;
    for(i=1;i<=a;i++){
        if(i%2!=0){
        cout<<i<<"\n";
        sum=sum+i;
        }
    }
    cout<<"the sum of the given odd numbers is: "<<sum;
    return 0;
}
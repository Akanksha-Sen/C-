#include<iostream>
using namespace std;
int main(){
    int n1,n2,i;
    cout<<"enter the first number: "<<"\n";
    cin>>n1;
     cout<<"enter the second number: ";
    cin>>n2;
    int x;
    for(i=1; i<=n1 && i<=n2; i++){
        if(n1%i==0 && n2%i==0){
            x = i;
        }
    }
   cout<<"the gcd of "<<n1<< " and "<<n2 <<" is "<<x;
    return 0;
}
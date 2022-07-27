#include<iostream>
using namespace std;
int main(){
    int divid,divis,quo,remain;
    cout<<"enter the dividend: ";
    cin>>divid;
    cout<<"enter the divisor: "<<"\n";
    cin>>divis;
    remain= divid%divis;
    quo=divid/divis;
    cout<<"the quotient is: "<<quo<<"\n";
    cout<<"the remainder is: "<<remain;
    return 0;
}
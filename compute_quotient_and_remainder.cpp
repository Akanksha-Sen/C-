#include<iostream>
using namespace std;
int main(){
    int remainder,quotient,num,divisor;
    cout<<"enter the number: ";
    cin>>num;
    cout<<"enter the divisor";
    cin>>divisor;
    quotient=num/divisor;
    cout<<"the quotient is: "<<quotient<<"\n";
    remainder=num%divisor;
    cout<<"the remainder is: "<<remainder<<"\n";
return 0;
}
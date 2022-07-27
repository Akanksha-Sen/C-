#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,sum=0,avg;
    cout<<"enter the four numbers: ";
    cin>> a>> b>> c>> d;
    sum=(a+b+c+d);
    cout<<"the sum is: "<<sum<<"\n";
    avg=sum/4;
    cout<<"the average is: "<< avg<<"\n";
return 0;
}
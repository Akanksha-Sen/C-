#include<iostream>
using namespace std;
int main(){
    int num1,num2,temp;
cout<<"enter the 1st number: "<<"\n";
cin>>num1;
cout<<"enter the 2nd number: "<<"\n";
cin>>num2;
temp=num1;
num1=num2;
num2=temp;
cout<<"after swapping, the 1st num becomes: " <<num1 << "\n";
cout<<"after swapping, the 2nd num becomes: " <<temp <<"\n";
return 0;
}
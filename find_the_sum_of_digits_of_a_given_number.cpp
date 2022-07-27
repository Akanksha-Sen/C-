#include<iostream>
using namespace std;
int main(){
int a,num,sum=0,i;
cout <<"enter the number: ";
cin>> a; //say a=23;
while(a!=0){
    num=a%10; // 23%10==3;  2%10== 2
    sum=sum+num;// sum=0+3=0;  sum=3+2=5;
    a=a/10;// 23=23/10= 2 then loop continues.. 2/10=0.2 and here loop terminates because now condition failed
    i++;
}
cout<<"the sum of the digits is: "<<sum<<"\n";
return 0;
}
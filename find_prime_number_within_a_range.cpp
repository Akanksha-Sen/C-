#include<iostream>
using namespace std;
int main(){
  int a,b,i,x;
  cout<<"enter the lower limit: ";
  cin>>a;
  cout<<"enter the upper limit: ";
  cin>>b;
  for(i=0; i>=a && i<=b; i++)
  {
    if(i%2==0)
    i=x;
  }
  cout<< x <<"\n";
  return 0;
}